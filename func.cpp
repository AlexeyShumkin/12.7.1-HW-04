#include "func.h"

bool IsKPeriodic(const std::string& str, int k)
{
	int n = (int)str.size();
	if (k > n / 2)
	{
		std::cout << "The string is NOT a multiple of " << k << '\n';
		return false;
	}
	else
	{
		std::vector<char> tmp;
		for (int i = 0; i < n; ++i)
			tmp.push_back(str[i]);
		tmp.emplace(tmp.begin(), tmp[n - 1]);
		tmp.pop_back();
		int shift = 1;
		for (int i = 0; i < n; ++i)
		{
			if (tmp[i] != str[i])
			{
				++shift;
				tmp.emplace(tmp.begin(), tmp[n - 1]);
				tmp.pop_back();
			}
			else
			{
				if ((i == n - 1) && (k % shift == 0))
				{
					std::cout << "The string is a multiple of " << k << '\n';
					return true;
				}
			}
		}
		std::cout << "The string is NOT a multiple of " << k << '\n';
		return false;
	}
}