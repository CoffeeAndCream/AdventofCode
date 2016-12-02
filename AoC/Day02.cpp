#include <string>
#include <iostream>
#include <fstream>
#include "Day02.h"
Day02::Day02(){
}
Day02::~Day02(){
}
void Day02::ReadFile(std::string path) {
	int counter = 0;
	std::string line;
	std::cout << " READING FROM FILE\n\n";
	std::fstream file(path, std::ios::in);
	while (file.good()) {
		while (getline(file, line, '\n')) {
			counter = 0;
			while (line[counter]) {
				std::cout << line[counter] << std::endl;
				key_data_.push_back(line[counter]);
				counter++;
			}
			key_movement_.push_back(key_data_);
		}
	}
}
void Day02::BathroomPass() {
	int counter = 0;
	int column = 2;
	int row = 2;
	for (auto key_movement_iter : key_movement_) {
		std::cout << "READING FROM VECTOR: [" << counter << "]\n";
		for (auto key_data_iter : key_movement_[counter]) {
			if (key_data_iter == 'U') {
				if (row != 1) {
					--row;
				}
			}
			if (key_data_iter == 'D') {
				if (row != 3) {
					++row;
				}
			}
			if (key_data_iter == 'L') {
				if (column != 1) {
					--column;
				}

			}
			if (key_data_iter == 'R') {
				if (column != 3) {
					++column;
				}
			}
		}
		++counter;
		std::cout << "ROW: " << row << "...... COLUMN: " << column << std::endl;
		button_presses_.push_back(mapping_key_.find({ row, column })->second);
		std::cout << "CODE: " << mapping_key_.find({ row, column })->second << std::endl;
	}
}