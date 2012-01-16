#include <iostream>
#include<fstream>
using namespace std;

bool is_letter(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    return true;
    return false;
}

bool is_digit(char c)
{
    if(c>='0' && c<='9')
    return true;
    return false;
}

bool is_operation(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
    return true;
    return false;
}

int main()
{
    ifstream is("chars.txt");
    if(is.is_open())
    {
        cout<<"plik istnieje"<<endl;
    }
    else
    {
        cout<<"Plik nie istnieje"<<endl;
    }
    int all=0;
    int letters=0;
    int digits=0;
    int operations=0;
    while(is.good())
    {
        char c=char(is.get());
        if(is.good())
        {
            cout<<c;
            all++;
            if(is_letter(c))
            letters++;
            if(is_digit(c))
            digits++;
            if(is_operation(c))
            operations++;
        }
    }
    cout<<"W pliku jest "<<letters<<" liter."<<endl;
    cout<<"W pliku jest "<<digits<<" cyfr."<<endl;
    cout<<"W pliku jest "<<operations<<" znakow operacji arytmetycznych."<<endl;
    cout<<"W pliku jest "<<all<<" wszystkich znaków."<<endl;
    return 0;
}
