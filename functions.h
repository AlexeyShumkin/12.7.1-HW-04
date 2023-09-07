#pragma once
#include <iostream>
#include <string>

void computeLPS(const std::string& str, int* lps)
{
	lps[0] = 0;
	int j = 0;
	int i = 1;
	while (i < str.size())
	{
		if (str[i] == str[j])
		{
			j++;
			lps[i] = j;
			i++;
		}
		else
		{
			if (j != 0)
				j = lps[j - 1];
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

void IsKPeriodic(const std::string& str, int k)
{
	if (k <= 0 || !str.size())
		std::cout << "The number must be positive and the string must not be empty!\n";
	else
	{
		int n = (int)str.size();
		int* lps = new int[n];
		computeLPS(str, lps);
		bool check = false;
		for (int i = 0; i < n; ++i)
		{
			if (lps[i] != 0 && (lps[i] % k) == 0)
			{
				std::cout << "The string is a multiple of the number " << lps[i] << '\n';
				check = true;
			}
		}
		if (!check)
			std::cout << "The string is not a multiple of the number " << k << std::endl;
		delete[] lps;
	}
}