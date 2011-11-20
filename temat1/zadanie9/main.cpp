#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Podaj liczbe" << endl;
    cin>>a;
    if(a==0)
    cout<<"Nie dziel przez zero"<<endl;
    else
    {
        b=1/a;
        cout<<b<<endl;
    }
    return 0;
}
