#include <iostream>

using namespace std;

void menu()
{
    cout<<"Dodaj 1"<<endl<<"Pomnoz 2"<<endl<<"Odejmij 3"<<endl<<"Podziel 4"<<endl<<"Wyjdz 5"<<endl;
}

int main()
{
    int a;
    double x, y;
    double result;
    do
    {
        menu();
        cin>>a;
        if(a==1)
        {
            cin>>x;
            cin>>y;
            result=x+y;
            cout<<result<<endl;
        }
        if(a==2)
        {
            cin>>x;
            cin>>y;
            result=x*y;
            cout<<result<<endl;
        }
        if(a==3)
        {
            cin>>x;
            cin>>y;
            result=x-y;
            cout<<result<<endl;
        }
        if(a==4)
        {
            cin>>x;
            cin>>y;
            result=x/y;
            cout<<result<<endl;
        }

    }
    while(a!=5);
        return 0;
}
