#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe:  " << endl;
    cin>>a;
    if(a<100 && a>9)
    cout<<"dwucyfrowa dodatnia";
    else
    cout<<"inna";
    return 0;
}
