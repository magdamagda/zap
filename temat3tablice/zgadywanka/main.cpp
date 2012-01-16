#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

bool check(int tab[], int a)
{
    for(int i=0; i<10; i++)
    {
        if(tab[i]==a)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    srand(time(NULL));
    cout << "Nowa gra - 1" << endl<<"Koniec - 2"<<endl<<"Wybierz 1-2 : ";
    int x;
    cin>>x;
    int array[10];
    int a;
    int proba=0;
    bool b=0;
    while(x==1)
    {
        cout<<"Losowanie...";
            for(int i=0; i<10; i++)
        {
            array[i]=rand()%21;
        }
        while(proba<3 && b==0)
        {
            cout<<"Podaj liczbe [1-20] : ";
            cin>>a;
            proba++;
            if(check (array, a))
            {
                cout<<"Trafiles!"<<endl;
                b=1;
            }
            else
            {
                cout<<"Niestety nie trafiles! Sprobuj ponownie.";
            }
        }
        cout << "Nowa gra - 1" << endl<<"Koniec - 2"<<endl<<"Wybierz 1-2 : ";
        cin>>x;
    }
    return 0;
}
