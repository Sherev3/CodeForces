#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x = 0;
    int number_of_statements = 0;
    string statments;

    cin >> number_of_statements;


    for(int counter = 0; counter < number_of_statements ; ++counter)
    {
        cin >> statments;
        if(statments == "++X" || statments == "X++")
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x;
    return 0;
}