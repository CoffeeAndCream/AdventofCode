#include "Day06.h"
#include <iostream>
#include <string>
#include <fstream>
#include <set>
Day06::Day06(){
}

Day06::~Day06(){
}

void Day06::ReadFile(std::string path) {
	std::fstream file(path, std::ios::in);
	std::string data = "";
	while (file.good()) {
		while (getline(file, data, '\n')) {
			++column_1_[data[0]];
			++column_2_[data[1]];
			++column_3_[data[2]];
			++column_4_[data[3]];
			++column_5_[data[4]];
			++column_6_[data[5]];
			++column_7_[data[6]];
			++column_8_[data[7]];
		}
	}
}

void Day06::InitData() {
	for (char let = 'a'; let != 'z'; let++) {
		column_1_[let];
		column_2_[let];
		column_3_[let];
		column_4_[let];
		column_5_[let];
		column_6_[let];
		column_7_[let];
		column_8_[let];
	}
}
void Day06::GetMax(std::map<char, int> map_input) {
	int current_val = 1000;
	char max_c = NULL;
	for (auto iter : map_input) {
		if (iter.second < current_val) {
			current_val = iter.second;
			max_c = iter.first;
		}
		else if(iter.second == 0) {
			//max_c = iter.first;
		}
	}
	std::cout << max_c;
}