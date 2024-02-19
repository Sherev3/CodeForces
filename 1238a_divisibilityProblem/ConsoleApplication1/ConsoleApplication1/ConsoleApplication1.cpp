// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	int t = 0;
	std::cin >> t;
	int a;
	int b;
	std::vector<int> vec;
	for (int i = 0; i < t; ++i)
	{
		int count = 0;
		std::cin >> a;
		std::cin >> b;
		if (a % b != 0)
		{
			if (a > b)
			{
				count= a / b + 1;
				count = (count * b) - a;
			}
			else 
			{
				count = b - a;
			}
		}
		vec.push_back(count);
	}
	for (int x : vec)
	{
		std::cout << x << "\n";
	}

}
