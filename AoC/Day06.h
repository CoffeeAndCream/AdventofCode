#include <vector>
#include <iostream>
#include <map>
#ifndef DAY06_H
#define DAY06_H
class Day06{
public:
	Day06();
	~Day06();
	void ReadFile(std::string);
	void GetMax(std::map<char, int>);
	void InitData();
	std::map<char, int> column_1_;
	std::map<char, int> column_2_;
	std::map<char, int> column_3_;
	std::map<char, int> column_4_;
	std::map<char, int> column_5_;
	std::map<char, int> column_6_;
	std::map<char, int> column_7_;
	std::map<char, int> column_8_;

};
#endif