// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    int x = 0;
    std::cin >> x;
    std::string odd = "I hate ";
    std::string even = "I love ";
    std::string output = "";

    for (int i = 0; i < x; ++i)
    {
        if (i % 2 == 0)
        {
            output = output + odd;
        }
        else 
        {
            output = output + even;
        }

        if (i == x - 1)
        {
            output += "it ";
        }
        else 
        {
            output += "that ";
        }
    }
    std::cout << output;
}
