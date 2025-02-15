#include <iostream>
#include <string>
int main()
{
    int number_of_rows = 0;

    std::cin >> number_of_rows;

    for(int i = 0; i < number_of_rows; ++i)
    {
        std::string ticket ="";
        std::cin >> ticket;
        int sum1 = 0;
        int sum2 = 0;
        for(int x = 0; x< 3; ++x)
        {
            int number = ticket[x] - '0';
            sum1 += number;

        }
        for(int x = 3; x < 6; ++x)
        {
            int number = ticket[x] - '0';
            sum2 += number;
        }
        if(sum1 == sum2)
        {
            std::cout << "Yes" << "\n";
        }
        else
        {
            std::cout << "No" << "\n";
        }

    }
    return 0;
}