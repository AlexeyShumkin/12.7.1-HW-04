#include "func.h"

int main()
{
	std::cout << "Enter the string of lowercase english letters without spaces: ";
	std::string str;
	std::getline(std::cin, str, '\n');
	std::cout << "Enter the number: ";
	int k = 1;
	std::cin >> k;
	IsKPeriodic(str, k);
}