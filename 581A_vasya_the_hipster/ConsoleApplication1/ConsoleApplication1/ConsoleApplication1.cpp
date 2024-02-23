
#include <iostream>

int main()
{
	int blue = 0;
	int red;
	std::cin >> blue;
	std::cin >> red;
	int larger;
	int smaller;
	if(blue >= red)
	{
		larger = blue;
		smaller = red;
	}
	else
	{
		larger = red;
		smaller = blue;
	}
	int fashion_days = smaller;
	int left_over = (larger - smaller)/2;

	std::cout << smaller << " " << left_over;


}
