

#include <iostream>

int main()
{
    int r = 0;
    int price = 0;
    std::cin >> price;
    std::cin >> r;
    int i = 1;
    while (1)
    {
        int new_price = price * i;
        int remainder = new_price % 10;

        if (remainder == 0 || remainder == r)
        {
            break;
        }
        ++i;
    }
    std::cout << i;
    
}


