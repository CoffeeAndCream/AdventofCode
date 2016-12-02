#include <iostream>
#include "Day01.h"
#include "Day02.h"
int main() {
	
	/*Day01* santas_helper = new Day01("D:/workspace/AoC/AoC/Day01.txt");
	std::cout << santas_helper->Move() << std::endl;
	*/
	Day02 *christmas = new Day02;
	christmas->ReadFile("D:/workspace/AoC/AoC/Day02.txt");
	christmas->BathroomPass();
	getchar();
	return 0;
}