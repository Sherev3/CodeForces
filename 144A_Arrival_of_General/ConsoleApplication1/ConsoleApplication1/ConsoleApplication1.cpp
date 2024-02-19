
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int vec_size = 0;
	std::cin >> vec_size;

	int tallest = 0;
	int tallest_index = 0;
	int shortest = 100;
	int shortest_index = 0;
	int inp = 0;
	int total = 0;
	for (int i = 0; i < vec_size; ++i)
	{
		std::cin >> inp;
		if (inp > tallest)
		{
			tallest = inp;
			tallest_index = i;
		}
		if (inp <= shortest)
		{
			shortest = inp;
			shortest_index = i;
		}
	}

	if (tallest_index > shortest_index)
	{
		shortest_index += 1;
	}
	total = tallest_index + ((vec_size - 1) - shortest_index);
	std::cout  << total;

}

