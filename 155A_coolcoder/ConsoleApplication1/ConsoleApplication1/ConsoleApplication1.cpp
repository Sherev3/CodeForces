#include <iostream>
#include <vector>
int main()
{
	int number_of_events = 0;
	std::cin >> number_of_events;
	int Max = 0;
	int Min = 0;
	int amazing_performance = 0;
	int score = 0;
	for (int i = 0; i < number_of_events; ++i)
	{
		std::cin >> score;
		if (i == 0)
		{
			Max = score;
			Min = score;
			continue;
		}
		if (score > Max)
		{
			++amazing_performance;
			Max = score;
		}
		else if (score < Min)
		{
			++amazing_performance;
			Min = score;
		}
		else 
		{
			//nothing
		}
	}
	std::cout << amazing_performance << "\n";
}

