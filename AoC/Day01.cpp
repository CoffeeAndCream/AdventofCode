#include "Day01.h"
#include <fstream>
#include <algorithm>
#include <string>
Day01::Day01(){
}
Day01::Day01(std::string path) {
	std::string data;
	std::fstream file(path, std::ios::in);
	while (file.good()) {
		while (getline(file, data, ',')) {
			raw_data_.push_back(data);
		}
	}
}
Day01::~Day01(){
	raw_data_.clear();
}
int Day01::Move() {
	char direction = 'N';
	int x = 0;
	int y = 0;
	int repeat_location = 0;
	for (auto iter : raw_data_) {
		switch (direction) {
		case 'N':
			if (iter[0] == 'L') {
				x -= std::stoi(iter.substr(1));
				direction = 'W';
			}
			else if (iter[0] == 'R') {
				x += std::stoi(iter.substr(1));
				direction = 'E';
			}
			break;
		case 'E':
			if (iter[0] == 'L') {
				y += std::stoi(iter.substr(1));
				direction = 'N';
			}
			else if (iter[0] == 'R') {
				y -= std::stoi(iter.substr(1));
				direction = 'S';
			}
			break;
		case 'S':
			if (iter[0] == 'L') {
				x += std::stoi(iter.substr(1));
				direction = 'E';
			}
			else if (iter[0] == 'R') {
				x -= std::stoi(iter.substr(1));
				direction = 'W';
			}
			break;
		case 'W':
			if (iter[0] == 'L') {
				y -= std::stoi(iter.substr(1));
				direction = 'S';
			}
			else if (iter[0] == 'R') {
				y += std::stoi(iter.substr(1));
				direction = 'N';
			}
			break;
		default:
			break;
		}
		if (visited_.find({x, y}) != visited_.end()){
			std::cout << "(" << x << ", " << y << ") ---> " << abs(x) + abs(y) << std::endl;
		}
		else{
			visited_.insert({x, y});
			std::cout << "(" << x << ", " << y << ")\n";
		}
	}
	return abs(x) + abs(y);
}
