#include <iostream>
#include <string>
int main() {
	std::string str, str2;
	for (int _ = 0; _ < 5; _++) {
		int i = 0, pos;
		std::getline(std::cin, str);
		str2 = "";
		while (str[i] != '\0') {
			if (str[i] == '\"' || str[i] == '\'') {
				pos = i;
				i++;
				while (str[i] != '\0' && str[i] != str[pos])
					i++;
				str2 += str.substr(pos+1, i-pos-1) + ' ';
			} else if (str[i] == '/') {
				i++;
				if (str[i] == '*') {
					pos = i;
					i++;
					while (!(str[i] == '*' && str[i+1] == '/'))
						i++;
					str2 += str.substr(pos+1, i-pos-1) + ' ';
					i++;
				} else if (str[i] == '/') {
					str2 += str.substr(i+1) + ' ';
					str[i+1] = '\0';
				}
			}
			i++;
		}
		str2.erase(str2.end()-1);
		std::cout << str2 << '\n';
	}
}