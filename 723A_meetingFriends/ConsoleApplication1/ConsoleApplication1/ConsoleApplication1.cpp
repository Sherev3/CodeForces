#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	int dumy;
	std::vector<int> v;
	std::cin >> dumy;
	v.push_back(dumy);
	std::cin >> dumy;
	v.push_back(dumy);
	std::cin >> dumy;
	v.push_back(dumy);
	std::sort(v.begin(), v.end());
	int min_distance = 0;
	min_distance = (v[1] - v[0]) + (v[2] - v[1]);
	std::cout << min_distance << "\n";
}

