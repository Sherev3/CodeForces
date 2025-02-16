#include <iostream>

int main()
{
	int number_of_tests = 0;
	std::cin >> number_of_tests;
	for (int i = 0; i < number_of_tests; ++i)
	{
		int rating;
		std::cin >> rating;
		if (rating <= 1399)
		{
			std::cout << "Division 4" << "\n";
		}
		else if (rating > 1399 && rating <= 1599)
		{
			std::cout << "Division 3" << "\n";
		}
		else if (rating > 1599 && rating <= 1899)
		{
			std::cout << "Division 2" << "\n";
		}
		else
		{
			std::cout << "Division 1" << "\n";
		}
		
	}
	return 0;
}