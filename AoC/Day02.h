#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <set>
#ifndef DAY02_H
#define DAY02_H
class Day02{
public:
	Day02();
	~Day02();
	void ReadFile(std::string);
	void BathroomPass();
private:
	std::vector<std::vector<char>> key_movement_;
	std::vector<char> key_data_;
	std::vector<int> button_presses_;
	std::set<std::pair<int, int>> keypad_ = { {1, 1}, {1, 2}, {1, 3},
											  {2, 1}, {2, 2}, {2, 3},
											  {3, 1}, {3, 2}, {3, 3} };
	std::map<std::pair<int, int>, int> mapping_key_ = { {{1, 1}, 1},{{1, 2}, 2},{{1, 3}, 3},
														{{2, 1}, 4},{{2, 2}, 5},{{2, 3}, 6},
														{{3, 1}, 7},{{3, 2}, 8},{{3, 3}, 9} };
};
#endif