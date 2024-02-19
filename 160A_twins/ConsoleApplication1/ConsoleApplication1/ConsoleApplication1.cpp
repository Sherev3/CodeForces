
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int input_count = 0;
    std::cin >> input_count;
    std::vector<int> vec;
    int number = 0;
    int total = 0;
    int largest_number = 0;
    int coin_count = 0;
    for (int x = 0; x < input_count; ++x)
    {
        std::cin >> number;
        vec.push_back(number);
        if (number > largest_number) { largest_number = number; }
        total += number;
    }
    std::sort(vec.begin(), vec.end());
    int value = 0;
    for (int x = 0; x < input_count; ++x)
    {
        value += vec[x];
        ++coin_count;
        std::cout << "value " << value << "\n";
        std::cout << "total/2 " << total/2 << "\n";
        if (value > total / 2)
        {
            break;
        }
    }
    std::cout << coin_count << "\n";
}

