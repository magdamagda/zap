#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "Ten program rysuje trojkat prostokatny. Podaj rozmiar boku trojkata:  "<< endl;
    cin>>k;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
