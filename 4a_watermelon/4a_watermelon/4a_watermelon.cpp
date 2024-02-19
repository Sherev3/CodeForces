// 4a_watermelon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x = 0;
	std::cin >> x;
	if (x % 2 == 0 && x > 2 )
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return 0;
}
