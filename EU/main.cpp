#include <iostream>
#include <fstream>

using namespace std;
struct orszag
{
    string  nev         ;
    int     belepes     ;
    string nyelv        ;
};
int main()
{
    cout << "EU" << endl            ;
    orszag orszagok[50]             ;
    ifstream be("c:\\c++\\eu.txt")  ;
    string nev      ;
    int belepes     ;
    string nyelv    ;
    while(be >> nev >> belepes >> nyelv)
    {
        cout << nev << endl ;
    }
    return 0;
}
