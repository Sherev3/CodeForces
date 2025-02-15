#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int number_of_enteries = 0;
    std::cin >> number_of_enteries;
    
    for(int entry = 0; entry < number_of_enteries; ++entry){
        
        std::vector<int> numberVector;
        // Get three numbers
        for(int i = 0; i < 3; ++i){
            int numberPlaceHolder;
            std::cin >> numberPlaceHolder;
            numberVector.push_back(numberPlaceHolder);
        }
        std::sort(numberVector.begin(),numberVector.end());
        std::cout << numberVector[1] << "\n";
    }

    return 0;
}