
#include <iostream>
#include <string>
int main()
{
	int n = 0;
	int group = 0;
	std::cin >> n;
	std::string current_magnet = "";
	std::string prev_magnet = "";
	for (int i = 0; i < n; ++i) 
	{
		std::cin >> current_magnet;
		if (i == 0) {
			prev_magnet = current_magnet;
			group += 1;
			std::cout << "start here!" << group << "\n";
		}
		else 
		{
			if (prev_magnet.back() == current_magnet.at(0)) 
			{
				group += 1;
				std::cout << "start here in else" << group << "\n";
			}
			prev_magnet = current_magnet;
		}
	}
	std::cout << group;
}

