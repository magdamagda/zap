#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

struct Car
{
    string marka;
    double cena;
    int rok;
};

void zamien1(double a, double b)
{
    double temp=a;
    a=b;
    b=temp;
}

void zamien2(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int const n=5;
    Car car[n];
    for(int i=0; i<n; i++)
    {
     //   cout<<"Podaj marke:   ";
      //  cin>>car[i].marka;
        cout<<"Podaj cene:   ";
        cin>>car[i].cena;
      //  cout<<"Podaj rocznik:   ";
      //  cin>>car[i].rok;
        cout<<endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(car[j-1].cena>car[j].cena)
            {
               double temp=car[j].cena;
               car[j].cena=car[i].cena;
               car[i].cena=temp;
               // zamien2(car[j].rok, car[i].rok);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
       // cout<<car[i].marka<<"   "<<car[i].cena<<"   "<<car[i].rok<<endl;
       cout<<car[i].cena<<endl;
    }

    return 0;
}
