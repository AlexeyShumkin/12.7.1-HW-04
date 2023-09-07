#include "functions.h"

int main()
{
	std::cout << "Enter the string of lowercase english letters without spaces: ";
	std::string str;
	std::cin >> str;
	std::cout << "Enter the number: ";
	int k = 1;
	std::cin >> k;
	IsKPeriodic(str, k);
}