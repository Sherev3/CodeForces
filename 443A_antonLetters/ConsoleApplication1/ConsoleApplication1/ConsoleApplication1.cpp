// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <set>
int main()
{
    
    std::string inp;
    std::getline(std::cin, inp);
    std::set<char> alph;
    std::stringstream ss(inp);

    char ch;
    
    while (!ss.eof())
    {
        ss >> ch;
        if (ch != ',' && ch != '{' && ch != '}' && ch != ' ') {
            alph.insert(ch);
        }
    }
    std::cout << alph.size();
}
