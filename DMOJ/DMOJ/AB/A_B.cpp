#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Complex {
    double r, i;
    Complex() : r(0), i(0) {}
    Complex(double r, double i) : r(r), i(i) {}
    inline Complex operator+ (const Complex &o) const { return Complex(r + o.r, i + o.i); }
    inline Complex operator- (const Complex &o) const { return Complex(r - o.r, i - o.i); }
    inline Complex operator* (const Complex &o) const { return Complex(r * o.r - i * o.i, r * o.i + i * o.r); }
    inline Complex& operator*= (const Complex &o) { double temp = r * o.r - i * o.i; i = r * o.i + i * o.r; r = temp; return *this; }
    inline Complex operator/ (const double o) const { return Complex(r / o, i / o); }
    inline Complex conj() const { return Complex(r, -i); }
    inline bool operator== (const Complex &o) const { return r == o.r && i == o.i; }
    inline bool operator!= (const Complex &o) const { return r != o.r || i != o.i; }
};

typedef Complex cd;

void fft(vector<cd> &a, int n) {
    if (n <= 1) return;
    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; ++i) {
        a0[i] = a[i * 2];
        a1[i] = a[i * 2 + 1];
    }
    fft(a0, n / 2);
    fft(a1, n / 2);
    double angle = 2 * M_PI / n;
    cd w(1, 0), wn(cos(angle), sin(angle));
    for (int i = 0; 2 * i < n; ++i) {
        a[i] = a0[i] + w * a1[i];
        a[i + n / 2] = a0[i] - w * a1[i];
        w *= wn;
    }
}

void ifft(vector<cd> &a, int n) {
    for (cd &x : a) x = x.conj();
    fft(a, n);
    for (cd &x : a) x = x.conj() / (double)n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string num1, num2;
    cin >> num1 >> num2;

    int n = num1.size(), m = num2.size();

    vector<cd> A(n), B(m);
    for (int i = 0; i < n; ++i)
        A[num1.size() - 1 - i] = Complex(num1[i] - '0', 0);
    for (int i = 0; i < m; ++i)
        B[num2.size() - 1 - i] = Complex(num2[i] - '0', 0);

    int k = 1;
    while (k < A.size() + B.size()) k <<= 1;
    A.resize(k);
    B.resize(k);

    fft(A, k);
    fft(B, k);

    for (size_t i = 0; i < k; ++i) A[i] *= B[i];

    ifft(A, k);

    vector<int> result(k);
    for (int i = 0; i < k; ++i) result[i] = round(A[i].r);

    int carry = 0;
    for (int i = 0; i < k; ++i) {
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }
    while (!result.empty() && result.back() == 0) result.pop_back(); // Remove leading zeroes

    if (result.empty()) {
        cout << "0";
    } else {
        for (auto it = result.rbegin(); it != result.rend(); ++it)
            cout << *it;
    }
    cout << endl;
    return 0;
}

