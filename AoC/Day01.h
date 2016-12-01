#include <iostream>
#include <vector>
#include <map>
#ifndef DAY01_H
#define DAY01_H
enum compass {N, S, E, W};
class Day01{
public:
	Day01();
	Day01(std::string);
	~Day01();
	int Move();
private:
	std::vector<std::string> raw_data_;
	int total_movement_ = 0;
};
#endif 