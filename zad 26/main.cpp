//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 26 | Seria: Sprawdzian | Lp. 21
//==================================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int Tablica[15];

    for(int i = 0;i<15;i++)
    {
        Tablica[i] = rand()%100;
    }

    for(int i = 0;i<15;i++)
    {
        cout<<Tablica[i] << " ";
    }

    int suma = 0;

    for(int i = 0;i<15;i++)
    {
        suma += Tablica[i];
    }

    cout<<"\n Suma wynosi "<<suma;

    float srednia = suma / 15.0;

    cout<<"\n Srednia wynosi "<<srednia<<endl;

    int mniejsze_niz_srednia  = 0;

    for(int i = 0;i<15;i++)
    {
       if(Tablica[i] < srednia)
        mniejsze_niz_srednia++;
    }

    cout<<"Liczb mniejszych niz srednia jest: "<<mniejsze_niz_srednia;

    return 0;
}

