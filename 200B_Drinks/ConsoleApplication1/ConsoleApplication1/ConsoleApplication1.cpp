

#include <iostream>

int main()
{
	float n = 0;
	std::cin >> n;
	
	float portions = 100 / n;
	float alcohol_percentage = 0;

	for (int x = 0; x < n; ++x)
	{
		float portion_percentage = 0;
		std::cin >> portion_percentage;
		alcohol_percentage = alcohol_percentage+(portion_percentage / 100) * portions;
	}
	std::cout << alcohol_percentage;
}
