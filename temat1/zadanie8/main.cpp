#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Podaj znak" << endl;
    cin>>a;
    if(a>47 && a<58)
    cout<<"Wprowadzono cyfre"<<endl;
    if(a>64 && a<91)
    cout<<"Wprowadzono duza litere"<<endl;
    if(a>96 && a<123)
    cout<<"Wprowadzono mala litere"<<endl;
    return 0;
}
