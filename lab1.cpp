//
// Created by srefa on 2/28/2024.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("text.in");
    ofstream fout("text.out");
    int c;
    fin>>c;
    fout<<c;
    return 0;
}
