#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
	string s;
    int n = b.length();
    for (char c : a) {
        s.push_back(c);
		if (s.size() >= n) {
			bool t = true;
			for (int i = 0; i < n; ++i)
				if (s[s.size()-n+i] != b[i]) {
					t = false;
					break;
				}
			if (t) for (int i = 0; i < n; ++i) s.pop_back();		
		}	
	}
	if (!s.size()) cout << "FRULA\n";
	else cout << s << endl;
    return 0;
}
