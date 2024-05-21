#include <iostream>
#include <string>
std::string arr[30], arr2[30];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];
	for (int i = 0; i < N; i++) {
		std::cin >> arr2[i];
		if (arr[i] == arr2[i]) {
			std::cout << "bad\n";
			return 0;
		}
	}
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
            if(arr[j] == arr2[i]) {
                if(arr2[j] == arr[i]) 
					break;
                else {
					std::cout<<"bad"; 
					return 0;
				}
            }
		}
	}
	std::cout << "good\n";
	return 0;
}
