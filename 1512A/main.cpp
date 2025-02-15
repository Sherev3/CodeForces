#include <iostream>
#include <map>
#include <vector>
int main()
{
    int number_of_rows;
    std::cin >> number_of_rows;
    for(int i = 0; i < number_of_rows; ++i)
    {
        int number_of_elements;
        std::cin >> number_of_elements;
        
        int element;
        std::vector<int> vec;
        std::map<int,int> counterMap;
        int index;
        for(int x = 0; x < number_of_elements; ++x)
        {
            std::cin >> element;
            vec.push_back(element);
            if (counterMap.find(element) == counterMap.end())
            {
                counterMap[element] = 1;
            }
            else 
            {
                counterMap[element] += 1;
            }
            int spy;
            for(const auto &pair:counterMap)
            {
                if(pair.second == 1)
                {
                    spy = pair.first;
                    break;
                }
            }
            
            for(int x = 0; x < vec.size(); ++x)
            {
                if(vec[x] == spy)
                {
                    index = x;
                    break;
                }
            }
            
        }
        std::cout << index +1 << "\n";

    }

    return 0;
}