#include <iostream>
#include <fstream>

using namespace std;

void menu()
{
    cout<<"Co chcesz zrobic?"<<endl<<"Otworz plik:  1"<<endl<<"Zakoncz:  2"<<endl;
}

int main()
{
    menu();
    int a;
    cin>>a;
    while(a==1)
    {
        cout << "Podaj nazwe pliku do otworzenia:   " << endl;
        string name;
        cin>>name;
        ifstream plik(name.c_str());
        if(!plik.good())
        {
            cerr<<"B³¹d otwarcia pliku!";
        }
        else
        {
            char z;
            while(plik.good())
            {
                z=char(plik.get());
                if(plik.good())
                    cout<<z;
            }
            cout<<endl;
        }
        menu();
        cin>>a;
    }
    return 0;
}
