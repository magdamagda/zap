#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj cyfre rzymska:   " << endl;
    string number;
    cin>>number;
    int x=0;
    int tab[number.length()];
    for(int i=0; i<number.length(); i++)
    {
        if(number[i]=='I')
            tab[i]=1;
        if(number[i]=='V')
            tab[i]=5;
        if(number[i]=='X')
            tab[i]=10;
        if(number[i]=='L')
            tab[i]=50;
        if(number[i]=='C')
            tab[i]=100;
        if(number[i]=='M')
            tab[i]=1000;
        if(number[i]=='D')
            tab[i]=500;
    }

    int a=0;
    int  b;
    for(int i=number.length()-1; i>=0; i--)
    {
        b=tab[i];
        if(tab[i]>=a)
        {
            x+=tab[i];
        }
        else
        {
            x-=tab[i];
        }
        a=tab[i];
    }
    cout<<x<<endl;
    return 0;
}
