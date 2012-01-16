#include <iostream>

using namespace std;

int main()
{
    int const a=10;
    char tab[a];
    char znak;
    int litery=0;
    int inne=0;
    for(int i=0; i<a; i++)
    {
        cin>>znak;
        if((znak>64 && znak<91) || (znak>96 && znak<123))
        {
            tab[litery]=znak;
            litery++;
        }
        else
        {
            tab[a-1-inne]=znak;
            inne++;
        }
    }
    for(int i=0; i<a; i++)
    {
        cout<<tab[i];
    }
    int male=0;
    int duze=0;
    int cyfry=0;
    int pozostale;
    for(int i=0; i<a; i++)
    {
        if(tab[i]>='a' && tab[i]<='z')
        male++;
        if(tab[i]>='A' && tab[i]<='Z')
        duze++;
        if(tab[i]>='0' && tab[i]<='9')
        cyfry++;
        pozostale=a-male-duze-cyfry;
    }
    cout<<endl;
    cout<<"wczytano "<<male<<"  malych liter"<<endl;
    cout<<"wczytano "<<duze<<"  duzych liter"<<endl;
    cout<<"wczytano "<<cyfry<<"  cyfr"<<endl;
    cout<<"wczytano "<<pozostale<<"  pozostalych znaków"<<endl;
    return 0;
}
