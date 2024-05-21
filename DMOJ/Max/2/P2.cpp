#include <iostream>
#include <string>
using namespace std;

int get_hash(string s) {
    int hash = 0;
    for (int i = 0; i < (int)s.size(); i++)
        hash = hash * 13 + s[i] - 'a' + 1;
    return hash;
}

int main() {
	int N, M, c = 0;
	cin >> N >> M;
	string s;
	if (N == 1) {
		for (int i = 'a'; i <= 'z'; i++) {
			s = i;
			if (get_hash(s) == M) c++;
		}
	} else if (N == 2) {
		for (int i = 'a'; i <= 'z'; i++)
			for (int j = 'a'; j <= 'z'; j++) {
				s = i + j;
				if (get_hash(s) == M) c++;
			}
	} else if (N == 3) {
		for (int i = 'a'; i <= 'z'; i++)
			for (int j = 'a'; j <= 'z'; j++)
				for (int k = 'a'; k <= 'z'; k++) {
					s = i + j + k;
					if (get_hash(s) == M) c++;
				}
	} else {
		for (int i = 'a'; i <= 'z'; i++) {
			for (int j = 'a'; j <= 'z'; j++)
				for (int k = 'a'; k <= 'z'; k++)
					for (int l = 'a'; l <= 'z'; l++) {
						s = i + j + k + l;
						if (get_hash(s) == M) c++;
					}
		}
	}
	cout << c << endl;
	return 0;
}

