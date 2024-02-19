
#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	int number_of_enteries = 0;
	std::cin >> number_of_enteries;

	for (int x = 0; x < number_of_enteries; ++x)
	{
		int orgNumber = 0;
		int number = 0;
		int count = 0;
		bool isRound = true;
		std::cin >> orgNumber;
		std::vector<int> multiples;
		number = orgNumber;
		while (number / 10 > 0)
		{
			++count;
			if (number % 10 != 0)
			{
				isRound = false;
			}
			if(number % 10 > 0)
				multiples.push_back(number % 10 * (pow(10, count) / 10));
			number = number/10;
		}
		
		if (isRound)
		{
			std::cout << 1 << "\n";
			std::cout << orgNumber << "\n";
		}
		else
		{
			++count;
			multiples.push_back(number % 10 * (pow(10, count) / 10));
			std::cout << multiples.size() << "\n";
			for (int i = 0; i < multiples.size() ; ++i)
			{
				std::cout << multiples[i] << " ";
			}
		}
	}
}
