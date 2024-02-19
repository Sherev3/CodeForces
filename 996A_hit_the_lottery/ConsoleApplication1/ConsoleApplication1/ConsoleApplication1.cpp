// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void divide_by_value(int dividend,int & withdraw,int &number_of_bills)
{
    if (withdraw / dividend >= 1)
    {
        number_of_bills += (withdraw / dividend);
        withdraw = withdraw - ((withdraw / dividend) * dividend);
    }
}

int main()
{
    int withdraw = 0;
    int number_of_bills = 0;
    std::cin >> withdraw;
    divide_by_value(100, withdraw, number_of_bills);
    divide_by_value(20, withdraw, number_of_bills);
    divide_by_value(10, withdraw, number_of_bills);
    divide_by_value(5, withdraw, number_of_bills);
    divide_by_value(1, withdraw, number_of_bills);
    std::cout << number_of_bills;
}
