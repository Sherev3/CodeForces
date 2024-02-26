// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int> vec;
    int number_of_friends;
    std::cin >> number_of_friends;
    int number_of_bottles;
    std::cin >> number_of_bottles;
    int litres_per_bottle;
    std::cin >> litres_per_bottle;
    int number_of_limes;
    std::cin >> number_of_limes;
    int number_of_slices;
    std::cin >> number_of_slices;
    int grams_of_salt;
    std::cin >> grams_of_salt;
    int litres_per_toast;
    std::cin >> litres_per_toast;
    int salt_per_toast;
    std::cin >> salt_per_toast;

    int number_of_drinks_drinks = (number_of_bottles * litres_per_bottle) / litres_per_toast;
    vec.push_back(number_of_drinks_drinks);
    int number_of_drinks_salt = grams_of_salt / salt_per_toast;
    vec.push_back(number_of_drinks_salt);
    int number_of_drinks_lemon = (number_of_limes * number_of_slices);
    vec.push_back(number_of_drinks_lemon);
    sort(vec.begin(), vec.end());

    int lowest_number_of_drinks = vec[0];
    int number_of_toasts = vec[0] / number_of_friends;
    std::cout << number_of_toasts;
}


