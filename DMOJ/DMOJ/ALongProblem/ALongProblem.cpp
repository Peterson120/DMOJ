#include <string>
#include <vector>
#include <algorithm>
int divide(int a, int b) {return a/b;}
int count_occurences(std::string &a, std::string &pat) {
	int cnt = 0;
	for (int i = 0; i < (int)a.length(); i++) {
		if (a[i] == pat[0]) {
			int j = 0;
			while (j < (int)pat.length() && a[i] == pat[j]) {
				i++;
				j++;
			}
			cnt += j == (int)pat.length();
		}
	}
	return cnt;
}
std::vector<int> sort_array(std::vector<int> &arr) {std::sort(arr.begin(), arr.end()); return arr;}

bool AC() {return 1;}
