
#include <iostream>
#include <vector>
int main()
{
	int number_of_enteries = 0;
	std::cin >> number_of_enteries;
	int number = 0;
	std::vector<int> x;
	for (int i = 0; i < number_of_enteries; ++i)
	{
		int ans = 0;
		std::cin >> number;
		if (number % 2 == 0)
		{
			ans = (number / 2) - 1;
			x.push_back(ans);
		}
		else 
		{
			ans = (number / 2);
			x.push_back(ans);
		}
	}
	for (int i = 0; i < number_of_enteries; ++i)
	{
		std::cout << x[i] << "\n";
	}
}
 