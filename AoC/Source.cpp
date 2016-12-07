#include <iostream>
#include "Day01.h"
#include "Day02.h"
#include "Day03.h"
#include "Day06.h"
int main() {
	
	/*Day01* santas_helper = new Day01("D:/workspace/AoC/AoC/Day01.txt");
	std::cout << santas_helper->Move() << std::endl;
	*/
	/*Day02 *christmas = new Day02;
	christmas->ReadFile("D:/workspace/AoC/AoC/Day02.txt");
	christmas->BathroomPass();
	*/
	/*Day03 *art = new Day03;
	art->ReadFile("D:/workspace/AoC/AoC/Day03.txt");
	*/
	Day06 *santas_radio = new Day06;
	santas_radio->ReadFile("D:/workspace/AoC/AoC/Day06.txt");
	santas_radio->InitData();
	santas_radio->GetMax(santas_radio->column_1_);
	santas_radio->GetMax(santas_radio->column_2_);
	santas_radio->GetMax(santas_radio->column_3_);
	santas_radio->GetMax(santas_radio->column_4_);
	santas_radio->GetMax(santas_radio->column_5_);
	santas_radio->GetMax(santas_radio->column_6_);
	santas_radio->GetMax(santas_radio->column_7_);
	santas_radio->GetMax(santas_radio->column_8_);

	getchar();
	return 0;
}