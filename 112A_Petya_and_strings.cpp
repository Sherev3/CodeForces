#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    char cs1;
    char cs2;
    int cs1_int;
    int cs2_int;
    bool isDifferent = false;

    std::transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return std::tolower(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(),
    [](unsigned char c){ return std::tolower(c); });


    
    for(int x = 0; x < s1.size(); ++x)
    {
        if(s1[x] == s2[x])
        {
            continue;
        }
        else
        {
            cs1 = s1.at(x);
            cs1_int = int(cs1);

            cs2 = s2.at(x);
            cs2_int = int(cs2); 

            if(cs1_int - cs2_int > 0)
            {
                cout << "1" << "\n";
                isDifferent = true;
                break;
            }
            else if (cs1_int - cs2_int < 0)
            {
                cout << "-1" << "\n";
                isDifferent = true;
                break;
            }       
        }    
    }
    if(!isDifferent)
    {
        cout << "0" << "\n";
    }
    
    return 0;
}