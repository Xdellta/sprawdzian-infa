//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 20 | Seria: Sprawdzian | Lp. 21
//==================================================================================

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;

    cout << "Podaj liczbe naturalna: ";
    cin >> a;

    cout << "Podaj kolejna liczbe naturalna: ";
    cin >> b;

    cout << "Podaj kolejna liczbe naturalna: ";
    cin >> c;

    do
    {
        d=(a+b+c/3);
        cout << "wynik" << d << endl;

    }while(a>=1 && b>=1 && c>=1);



    return 0;
}
