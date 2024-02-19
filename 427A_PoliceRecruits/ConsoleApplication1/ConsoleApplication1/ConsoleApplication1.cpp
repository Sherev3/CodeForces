// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   int events;
   int untreated_crimes = 0;
   std::cin >> events;
   int recruit_count = 0;
   int e;
   for (int x = 0; x < events; ++x)
   {

	   std::cin >> e;

	   if (e > 0)
	   {
		   recruit_count = recruit_count + e;
	   }
	   else 
	   {
		   if (recruit_count > 0)
		   {
			   recruit_count = recruit_count + e;
			   if (recruit_count < 0)
			   {
				   untreated_crimes = recruit_count * -1;
			   }
		   }
		   else
		   {
			   untreated_crimes = untreated_crimes + (e * -1);
		   }
	   }
   }
   std::cout << untreated_crimes;
}


