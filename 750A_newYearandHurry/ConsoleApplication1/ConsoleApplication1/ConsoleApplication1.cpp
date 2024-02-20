

#include <iostream>

int main()
{
	int number_of_mins = 60 * 4;
	int number_of_problems = 0;
	int travel_time = 0;
	std::cin >> number_of_problems;
	std::cin >> travel_time;
	int time_left = number_of_mins - travel_time;
	int solve = 0;
	for (int i = 1; i <= number_of_problems; ++i)
	{
		int time_to_solve = 5 * i;
		time_left = time_left - time_to_solve;
		if (time_left >= 0)
		{
			++solve;
		}
	}
	std::cout << solve <<"\n";
}
