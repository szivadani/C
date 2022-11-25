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
    int sor = 0     ;
    while(be >> nev >> belepes >> nyelv)
    {
        orszagok[sor].nev       = nev       ;
        orszagok[sor].belepes   = belepes   ;
        orszagok[sor].nyelv     = nyelv     ;
        sor++                               ;
    }
    cout << "2. feladat" << endl ;
    for (int i = 0 ; i < sor ; i++)
    {
        cout << "Orszag:" << orszagok[i].nev << " Belepes eve:" << orszagok[i].belepes << endl ;
    }
    cout << "3. feladat" << endl ;
    cout << "2000 utan csatlakozo orszagok:" << endl ;
    for (int i = 0 ; i < sor ; i++)
    {
        if (orszagok[i].belepes >=2000)
        {
            cout << "\t" << orszagok[i].nev << endl ;
        }
    }
    return 0;
}
