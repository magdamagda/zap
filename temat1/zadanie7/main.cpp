#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Podaj znak" << endl;
    cin>>a;
    if(a>64 && a<91)
    cout<<"Wprowadzono duza litere"<<endl;
    else
    cout<<"Nie wprowadzono duzej litery"<<endl;
    return 0;
}
