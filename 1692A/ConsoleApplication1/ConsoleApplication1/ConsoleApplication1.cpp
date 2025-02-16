// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int number_of_races = 0;
	
	std::cin >> number_of_races;

	// number of races
	for (int i = 0; i < number_of_races; ++i)
	{
		int counter = 0;
		// Get race values
		int a = 0;
		for (int i = 0; i < 4; ++i)
		{
			if (i == 0)
			{
				std::cin >> a;
			}
			else
			{
				int b = 0;
				std::cin >> b;
				if (b > a)
				{
					++counter ;
				}
			}
		}
		std::cout << counter << "\n";
	}
	
	return 0;
}


