#include <iostream>

int main()
{
    long long int x = 0;
    bool isXEven = true;
    long long int res = 0;
    std::cin >> x;
    isXEven = !(x % 2);
    if (isXEven) 
    {
        res = x / 2;
    }
    else 
    {
        res = (x / 2 + 1) * -1;
    }
    std::cout << res;
}
