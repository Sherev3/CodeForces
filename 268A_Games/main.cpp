#include <iostream>
#include <string>
#include <vector>
#include <set>
int main()
{
    std::string str = "codeforces";
    std::set<char>  strSet;
    int number_of_enteries = 0;
    for(auto const& l: str )
    {
        strSet.insert(l);
    }
    std::cin >> number_of_enteries;

    for(int i = 0; i < number_of_enteries; ++i)
    {
        char ch;
        std::cin >> ch;
        if(strSet.find(ch) != strSet.end())
        {
            std::cout << "Yes" << "\n";
        }
        else{
            std::cout << "No" << "\n";
        }
    }

    return 0;
}