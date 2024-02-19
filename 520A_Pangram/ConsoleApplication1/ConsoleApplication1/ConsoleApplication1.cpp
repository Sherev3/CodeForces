
#include <iostream>
#include <string>
#include <set>

int main()
{
	int number_of_letters = 0;
	std::string input_word= "";
	std::cin >> number_of_letters;
	std::cin >> input_word;
	std::set<char> mySet;

	if (input_word.size() < 26)
	{
		std::cout << "NO";
	}
	else 
	{
		auto it = input_word.begin();
		while(it != input_word.end())
		{
			mySet.insert( tolower(*it));
			++it;
		}
		if (mySet.size() == 26)
		{
			std::cout << "YES";
		}
		else
		{
			std::cout << "NO";
		}
	}
}
