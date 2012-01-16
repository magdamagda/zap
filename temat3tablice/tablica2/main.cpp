#include <iostream>

using namespace std;

int main()
{
    int const k=5;
    double tab[k][k];
    int n=1;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            tab[i][j]=5.0*n/(n+1);
            n++;
        }
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout<<tab[i][j]<<"  ";
        }
        cout<<endl;
    }
    double suma1=0;
    double suma2=0;
    for(int i=0; i<k; i++)
    {
        suma1+=tab[i][i];
    }
    for(int i=0; i<k; i++)
    {
        suma2+=tab[k-1-i][i];
    }
    cout<<"suma na g³ównej przekatnej: "<<suma1<<endl;
    cout<<"na drugiej  "<<suma2<<endl;

    for(int i=0; i<k/2; i++)
    {
        double temp=tab[i][i];
        tab[i][i]=tab[k-1-i][k-1-i];
        tab[k-1-i][k-1-i]=temp;

        temp=tab[i][k-1-i];
        tab[i][k-1-i]=tab[k-1-i][i];
        tab[k-1-i][i]=temp;
    }

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout<<tab[i][j]<<"  ";
        }
        cout<<endl;
    }

    double a=3;
    double b=4;
    int x=0;
    for(int i=0; i<k/2; i++)
    {
        for(int j=i+1; j<k-2-i; j++)
        {
            if(tab[i][j]<b && tab[i][j]>a)
            x++;
        }
    }
    cout<<"Nad obiema przekatnymi liczb z przedzia³u 3 - 4 jest  "<<x;

    return 0;
}
