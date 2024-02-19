
#include <iostream>
#include <vector>
int main()
{
	int n1;
	int n2;
	int n3;
	int n4;
	int count = 0;
	std::vector<int> vec;
	for (int x = 0; x < 4; ++x)
	{
		std::cin >> n1;
		if (vec.empty()) 
		{
			vec.push_back(n1);
		}
		else
		{
			if (std::find(vec.begin(), vec.end(), n1) != vec.end())
			{
				/*++count;*/
			}
			else
			{
				vec.push_back(n1);
			}
		}
	}
	count = 4 - vec.size();
	std::cout << count;
}

