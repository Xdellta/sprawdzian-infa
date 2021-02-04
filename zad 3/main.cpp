//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 3 | Seria: Sprawdzian | Lp. 21
//==================================================================================

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE , "Polish");

    float a, potega, pierwiastek;
    cout << " Podaj liczbê: ";
    cin >> a;

    potega = pow(a,3);
    pierwiastek = sqrt(a);

    cout << " Twoja liczba podniesiona do potêgi 3 wynosi = " << potega << endl;
    cout << " Pierwiastek z twojej liczby wynosi = " << pierwiastek << endl;




    return 0;
}
