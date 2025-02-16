// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{ 
    int number_of_cards = 0;
    std::cin >> number_of_cards;
    std::vector<int> cards;
    bool isSerejaTurn = true;

    for (int i = 0; i < number_of_cards; ++i)
    {
        int card = 0;
        std::cin >> card;
        cards.push_back(card);
    }

    int Serivo = 0;
    int Dima = 0;
    while (cards.size() > 1)
    {
        int larger = 0;
        if (cards[0] > cards[cards.size() - 1])
        {
            larger = cards[0];
            cards.erase(cards.begin());
        }
        else
        {
            larger = cards[cards.size() - 1];
            cards.erase(cards.begin() + cards.size() - 1);
        }
        if (isSerejaTurn){Serivo += larger;}
        else { Dima += larger; }
        isSerejaTurn = !isSerejaTurn;
    }

    if (isSerejaTurn) { Serivo += cards[0]; }
    else { Dima += cards[0]; }
    std::cout << Serivo << " " << Dima << "\n";

    return 0;
}

