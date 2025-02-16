// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{   
    int number_of_tests = 0;
    std::cin >> number_of_tests;
    
    for (int i = 0; i < number_of_tests; ++i)
    {
        int64_t number;
        std::cin >> number;
        if (number % 2 == 0)
        {
            int64_t multiplayer = 2;
            while (multiplayer < number)
            {
                multiplayer = multiplayer * 2;
            }
            if (multiplayer > number)
            {
                std::cout << "Yes" << "\n";
            }
            else
            {
                std::cout << "No" << "\n";
            }
        }
        else
        {
            if (number != 1)
            {
                std::cout << "Yes" << "\n";
            }
            else 
            {
                std::cout << "No" << "\n";
            }
        }
    }

}

