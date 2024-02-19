#include <iostream>
#include <string>
int main()
{
	int column = 0;
	int row = 0;
	std::cin >> row;
	std::cin >> column;
	std::string evenString = "";
	std::string oddString = "";
	std::string oddStringOpp = "";
	bool regular = true;
	for (int i = 0; i < column; ++i)
	{
		evenString = evenString + "#";
	}
	for (int i = 0; i < column; ++i)
	{
		if (i != column - 1)
		{
			oddString = oddString + ".";
		}
		else
		{
			oddString = oddString + "#";
		}
	}
	for (int i = 0; i < column; ++i)
	{
		if (i == 0)
		{
			oddStringOpp = oddStringOpp + "#";
		}
		else
		{
			oddStringOpp = oddStringOpp + ".";
		}
	}
	for (int r = 0; r < row; ++r)
	{
		if (r % 2 == 0)
		{
			//c = '#';
			std::cout << evenString<< "\n";
		}
		else 
		{
			if(regular)
			{
				std::cout << oddString << "\n";
			}
			else
			{
				std::cout << oddStringOpp << "\n";
			}
			regular = !regular;
		}

	}
}