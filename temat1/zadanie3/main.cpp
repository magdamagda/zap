#include <iostream>

using namespace std;

int main()
{
    int m, n, reszta, wynik;
    cout<<"Podaj dwie liczby"<<endl;
    cin>>m;
    cin>>n;
    reszta=m%n;
    wynik=m/n;
    cout<<"czesc calkowita:  "<<wynik<<endl;
    cout<<"reszta:  "<<reszta<<endl;
    return 0;
}
