#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int M;
    int N;
    int total_area;
    int area_of_piece = 2;
    int max_pieces;
    string input;

    getline(cin,input);
    stringstream ss(input);
    
    ss >> M >> N;
    total_area = M * N;
    max_pieces = total_area / area_of_piece;
    cout << max_pieces;

    return 0;
}