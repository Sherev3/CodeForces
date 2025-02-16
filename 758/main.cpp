#include <iostream>
#include <vector>
#include <algorithm>
int main() {

    int number_of_citizens = 0;
    std::cin >> number_of_citizens;
    std::vector<int> arr;
    int placeholder = 0;

    for(int i = 0; i < number_of_citizens; ++i){
        std::cin >> placeholder;
        arr.push_back(placeholder);
    }
    std::sort(arr.begin(),arr.end());
    int highest_value =  arr[arr.size()-1];

    int sum = 0;
    for(int i = 0; i < number_of_citizens; ++i){
        sum += highest_value  - arr[i]; 
    }
    std::cout << sum << "\n";

    return 0;
}