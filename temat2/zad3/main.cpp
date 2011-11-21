#include <iostream>

using namespace std;

int main()
{
    int n;
    double x;
    double max1=0;
    double max2=0;
    cout << "Podaj liczbe: " << endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Podaj liczbe zmiennoprzecinkowa: "<<endl;
        cin>>x;
        if (x>max1)
        {
            max1=x;
        }
        else if (x>max2)
        {
            max2=x;
        }
    }
    cout<<"Najwiêksze liczby to "<<max1<<", "<<max2<<endl;
    if (max1==max2)
    cout<<"S¹ to te same liczby"<<endl;
    return 0;
}
