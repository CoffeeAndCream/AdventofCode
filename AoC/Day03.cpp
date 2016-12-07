#include "Day03.h"
#include <sstream>
#include <string>
#include <fstream>
Day03::Day03(){
}
Day03::~Day03(){
}
void Day03::ReadFile(std::string path) {
	std::vector<int> individual_triangles;
	std::fstream file(path, std::ios::in);
	std::string data, line;
	std::stringstream ss;
	int counter = 0;

	while (file.good()) {
		while (getline(file, line, '-')) {
			counter = 0;
			while (line[counter]) {
				std::cout << line[counter] << std::endl;
				if (line[counter] != '_') {
					ss << line[counter];
				}
				//individual_triangles.push_back(line[counter]);
				counter++;
			}
		}
	}
}
