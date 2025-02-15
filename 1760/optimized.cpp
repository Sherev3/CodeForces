#include <iostream>
#include <algorithm>
#include <array>

#define ARR_SIZE 3

int main(){
    int number_of_enteries = 0;
    std::cin >> number_of_enteries;
    std::array<int , ARR_SIZE> arr;
    int placeholder = 0;

    for(int entry = 0; entry < number_of_enteries; ++entry){
        for(int counter = 0; counter < ARR_SIZE; ++counter){
            std::cin >> placeholder;
            arr[counter] = placeholder;        
        }
        std::nth_element(arr.begin(),arr.begin()+1,arr.end());
        std::cout << arr[1] << "\n";
    }

    return 0;
}