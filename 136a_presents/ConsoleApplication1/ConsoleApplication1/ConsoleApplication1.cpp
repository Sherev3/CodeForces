
#include <iostream>
#include <vector>
int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v;
	std::vector<int> v2;
	int dummy = 0;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> dummy;
		v.push_back(dummy);
		v2.push_back(0);
	}
	for (int i = 0; i < v.size(); i++)
	{
		int index = v[i] - 1;
		v2[index] = i+1;
	}

	for (int i = 0; i < v2.size(); i++)
		std::cout << v2[i] << ' ';
}
