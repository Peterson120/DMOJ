#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <string_view>

std::string str1 = "";
std::string str2 = "";

int main() {
	std::getline(std::cin, str1);
	std::getline(std::cin, str2);

	str1.erase(std::remove(str1.begin(), str1.end(), ' '), str1.end());
	str2.erase(std::remove(str2.begin(), str2.end(), ' '), str2.end());
	if (str1.length() != str2.length()) {
		std::cout << "Is not an anagram.\n";
		return 0;
	}

	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());

	if (str1 == str2) 
		std::cout << "Is an anagram.\n";
	else 
		std::cout << "Is not an anagram.\n";
}
