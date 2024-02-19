

#include <iostream>

int main()
{
	int k;
	int l;
	int m;
	int n;
	int d;
	int counter = 0;

	std::cin >>k>>l>>m>>n>>d;
	if( l == 1 || \
		 m == 1 || \
		 n == 1 || \
		 k == 1)
	{
		counter = d;
	}
	else {
		for (int i = d; i > 0; --i)
		{
			if (i % l == 0 || \
				i % m == 0 || \
				i % n == 0 || \
				i % k == 0)
			{
				++counter;
			}
		}
	}
	std::cout << counter;
	
}
