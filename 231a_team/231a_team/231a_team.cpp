// 231a_team.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number_of_lines = 0;
    int number_of_solutions = 0;
    std::cin >> number_of_lines;
    for (int i = 0; i < number_of_lines; ++i)
    {
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        std::cin >> num1;
        std::cin >> num2;
        std::cin >> num3;
        if ((num1 + num2 + num3) >= 2)
        {
            ++number_of_solutions;
        }
    }
    std::cout << number_of_solutions;

}
