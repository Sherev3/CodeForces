#include <iostream>
#include <cmath>
int main()
{
    int base = 5;
    int exponent;

    std::cin >> exponent;

    int res = pow(base,exponent);

    int remainder= res %100;

    std::cout << "25" <<"\n";


}