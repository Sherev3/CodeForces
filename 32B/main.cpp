#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    bool process = true;
    std::string ans = "";
    int i = 0;
    while(str.length() > 0)
    {
        if(str[i] == '.')
        {
            ans = ans + "0";
            str = str.substr(1); 
        }
        else
        {
            if(str[1] == '.')
            {
                ans = ans + "1";
                str = str.substr(2); 
            }
            else
            {
                ans = ans + "2";
                str = str.substr(2); 
            }
        }
    }

    std::cout << ans << "\n";
    return 0;
}