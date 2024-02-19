// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>

int main()
{
	int total_number_of_levels = 0;
	int iterator = 0;
	std::set<int> mySet;

	std::cin >> total_number_of_levels;
	std::cin >> iterator;
	bool full_house = true;
	int dummy;
	for (int i = 0; i < iterator; ++i)
	{
		std::cin >> dummy;
		mySet.insert(dummy);
	}
	std::cin >> iterator;
	for (int i = 0; i < iterator; ++i)
	{
		std::cin >> dummy;
		mySet.insert(dummy);
	}
	int count = 1;
	for (int element : mySet)
	{
		if (!(count - element))
		{
			++count;

		}
		else
		{
			full_house = false;
			break;
		}
	}
	if (full_house)
	{
		if (mySet.size() == total_number_of_levels) { std::cout << "I become the guy."; }
		else { std::cout << "Oh, my keyboard!"; }
	}
	else { std::cout << "Oh, my keyboard!"; }

}

