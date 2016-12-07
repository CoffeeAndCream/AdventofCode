#include <vector>
#include <iostream>
#include <string>
#ifndef DAY03_H
#define DAY03_H
class Day03{
public:
	Day03();
	~Day03();
	void ReadFile(std::string);
private:
	std::vector<std::vector<int>> vector_of_triangles_;
};
#endif