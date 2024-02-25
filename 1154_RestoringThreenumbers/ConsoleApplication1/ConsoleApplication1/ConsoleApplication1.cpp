
#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	std::vector<int> inp;
	int num;
	for (int i = 0; i < 4; ++i)
	{
		std::cin >> num;
		inp.push_back(num);
	}
	sort(inp.begin(), inp.end());
	int c = inp[3] - inp[2];
	int a = inp[1] - c;
	int b = inp[3] - inp[1];
	std::cout << a << " " << b <<" "<< c;
}
