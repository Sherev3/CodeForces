// 71a_way_too_long_words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
	int count = 0;
	std::cin >> count;
	for (int i = 0; i < count; ++i)
	{
		std::string x;
		std::string res;
		std::cin >> x;
		if (x.length() > 10)
		{
			std::string num = std::to_string(x.length() - 2);
			res = x[0] + num + x[x.length() - 1];
			std::cout << res << "\n";
		}
		else
		{
			std::cout << x << "\n";
		}
	}

	
}

