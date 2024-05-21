#include <iostream>
#include <unordered_map>
#include <string>
std::string animals[] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"}; 
std::unordered_map <std::string, int> when_born;
std::string which_ani(int year){
	int x = 0, y = 0;
	while (y > year){
		x--;
		y--;
		if (x == -1) x = 11; 
	}
	while (y < year) {
		x++;
		y++;
		if (x == 12) x = 0;
	}
	return animals[x];
}
int main(){
	int n; std::cin >> n;
	std::string name1, t relation, Zodiac, name2;
	when_born["Bessie"] = 0;
	for (int i = 0; i < n; i++){
		std::cin >> name1 >> t >> t >> relation >> Zodiac >> t >> t >> name2;
		when_born[name1] = when_born[name2];
		if (relation == "previous") when_born[name1]--;
		else when_born[name1]++;
		while(which_ani(when_born[name1]) != Zodiac) {
			if (relation == "previous") when_born[name1]--;
			else when_born[name1]++;
		}
	}
	int diff = when_born["Bessie"] - when_born["Elsie"];
	if (diff <= 0) std::cout << -diff;
	else std::cout << diff;
	return 0;
}