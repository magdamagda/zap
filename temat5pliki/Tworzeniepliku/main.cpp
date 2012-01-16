#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    string name;
    cout<<"Podaj nazwe pliku do utworzenia:  "<<endl;
    cin>>name;
    fstream plik_we(name.c_str(), ios::out);
    if (!plik_we.is_open())
    {
        cout<<"Plik nie zosta utworzony"<<endl;
    }
    int const n=5;
    char ch;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        while((ch=getchar())!='\n')
        {
            plik_we<<ch;
        }
        plik_we<<endl;
    }

    plik_we.close();
    fstream plik_wy(name.c_str(), ios::in);
    plik_we.open("result.txt", ios::out);

    while(plik_wy.good())
    {
        string line;
        getline(plik_wy, line);
        if((line[0]>='A' && line[0]<='Z') && line.length()<=10)
        plik_we<<line<<endl;
    }

    return 0;
}
