#include <iostream>
#include <vector>
int main()
{

	uint64_t n = 0;
	uint64_t k = 0;
	std::cin >> n;
	std::cin >> k;
	uint64_t size_of_odd = 0;
	uint64_t size_of_even = 0;
	uint64_t res = 0;
	if (n % 2 != 0)
	{
		size_of_odd = (n / 2) + 1;
		size_of_even = n / 2;
	}
	else 
	{
		size_of_odd = n / 2;
		size_of_even = n / 2;
	}

	if (k > size_of_odd) { res = (k - size_of_odd) * 2; }
	else { res = k + (k - 1); }
	std::cout << res;
}

