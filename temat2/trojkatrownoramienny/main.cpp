#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "Ten program rysuje trojkat rownoramienny. Podaj rozmiar wysokosci trojkata:  "<< endl;
    cin>>k;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k-i; j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
