
#include <iostream>
#include <vector>
#include <sstream>
#include <string> 
int main()
{
	std::string number1 = "";
	std::string number2 = "";
	std::cin >> number1;
	std::cin >> number2;
	
	int len = number1.length();

	int ans = 0;

	std::stringstream stream;

	
	for(int i = 0; i < len;++i)
	{
		if (number1[i] == number2[i])
		{
			stream << "0";
		}
		else
		{
			stream << "1";
		}

	}

	std::string result;
	stream >> result;
	std::cout << result;
}

