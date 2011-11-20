#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double x, y;
    cout << "Podaj liczbe: " << endl;
    cin>>x;
    if(x>=0)
    {
        y=(sqrt(x)+x)/(2+x);
        cout<<y<<endl;
    }
    else
    cout<<"0"<<endl;
    return 0;
}
