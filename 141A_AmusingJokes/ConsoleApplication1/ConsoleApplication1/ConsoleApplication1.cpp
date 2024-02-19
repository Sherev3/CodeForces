
#include <iostream>
#include <string>
#include <map>
int main()
{
    std::string host_name  = "";
    std::string guest_name = "";
    std::string bs_name = "";
    int host_numb = 0;
    int guest_numb = 0;
    int total_size = 0;
    int bs_size = 0;

    std::cin >> host_name;
    std::cin >> guest_name;
    std::cin >> bs_name;
    std::map<char, int> realMap;
    std::map<char, int> bsMap;
    if (bs_name.size() != host_name.size() + guest_name.size())
    {
        std::cout << "NO";
        return 0;
    }
    else 
    {
        for (char c : host_name)
        {
            realMap[c]++;
        }
        for (char c : guest_name)
        {
            realMap[c]++;
        }
        for (char c : bs_name)
        {
            bsMap[c]++;
        }
        for (const auto& pair : realMap)
        {
            if (bsMap.find(pair.first) != bsMap.end())
            {
                if (bsMap[pair.first] == pair.second)
                {
                    continue;
                }
                else
                {
                    std::cout << "NO";
                    return 0;
                }
            }
            else
            {
                std::cout << "NO";
                return 0;
            }
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }
    std::cout << "YES";
    return 0;
}
