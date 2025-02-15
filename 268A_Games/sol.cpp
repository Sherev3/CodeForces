#include <iostream>
#include <vector>

int main()
{
   std::vector<std::vector<int> > teams;
   int number_of_teams  = 0;
    int counter =0;
   std::cin >> number_of_teams;
    int home_color = 0;
    int away_color = 0;
   for(int i = 0; i < number_of_teams;++i)
   {
       std::vector<int> colors;
       std::cin >> home_color;
       std::cin >> away_color;
       colors.push_back(home_color);
       colors.push_back(away_color);
       teams.push_back(colors);
   }
   for(int i = 0;i<number_of_teams;++i)
   {
       int host_color = teams[i][0];
       for(int x = 0; x< number_of_teams;++x)
       {
           if(x != i)
           {
               if(host_color == teams[x][1]){++counter;}
           }
       }
   }
    std::cout << counter;
   return 0;
}