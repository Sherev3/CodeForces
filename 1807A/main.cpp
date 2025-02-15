#include <iostream>

int main()
{
    int number_of_rows = 0;
    std::cin >> number_of_rows;
    int num1;
    int num2;
    int res;
    for(int i = 0; i < number_of_rows; ++i)
    {
        std::cin >> num1;
        std::cin >> num2;
        std::cin >> res;

        if(num1 + num2 == res)
        {
            std::cout << "+" << "\n";
        }
        else 
        {
            std::cout << "-" << "\n";
        }
    }

    return 0;
}