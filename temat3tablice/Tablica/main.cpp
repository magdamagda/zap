#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void wyswietl(int tab[])
{
    for(int i=0; i<2000; i++)
    {
        cout<<tab[i]<<endl;
    }
}

int main()
{
    srand(time(NULL));
    int array[2000];
    int suma=0;
    int a=0;
    int b=0;
    int suma1=0;
    int suma2=0;
    for(int i=0; i<2000; i++)
    {
        array[i]=rand()%6001-3000;
    }
    for(int i=0; i<2000; i++)
    {
        suma+=array[i];
    }
    cout<<"suma elementów tablicy:  "<<suma<<endl;
    for(int i=0; i<2000; i++)
    {
        if(array[i]>0)
        {
            a++;
        }
    }
    cout<<"liczba elementów wiêkszych od 0:  "<<a<<endl;
    for(int i=0; i<2000; i++)
    {
        if(array[i]<-1000)
        {
            b++;
        }
    }
    cout<<"liczba elementów mniejszych od -1000:  "<<b<<endl;
    cout<<"œrednia wartosc wszystkich elementow:  "<<suma/2000<<endl;
    for(int i=0; i<1000; i++)
    {
        suma1+=array[i];
    }
    for(int i=1000; i<2000; i++)
    {
        suma2+=array[i];
    }
    if(suma1>suma2)
    {
        cout<<"srednia liczb od 0 do 999 jest wiêksza"<<endl;
    }
    else if(suma1==suma2)
    {
        cout<<"srednie sa rowne"<<endl;
    }
    else
    {
        cout<<"srednia liczb od 1000 do 1999 jest wieksza"<<endl;
    }
    return 0;
}
