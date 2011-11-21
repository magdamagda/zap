#include <iostream>
#include<cmath>

using namespace std;

int factorial(int nr)
{
    if(nr==0)
    {
        return 1;
    }
    int a=1;
    for(int i=1; i<=nr; i++)
    {
        a=a*i;
    }
    return a;
}

double function(double x, double y)
{
    double result=0;
    for(int i=0; i<=10; i++)
    {
        result+= pow(x+y,i)/factorial(i);
    }
    return result;
}

int main()
{
    double y;
    double result;
    cout <<"Podaj liczbe:  " << endl;
    cin>>y;
    cout<<"f(x, y)"<<endl;
    for(double x=0.1; x<=10; x+=0.1)
    {
        if (sin(x)>cos(x))
        {
            result=function(x, y);
        }
        else
        {
            result=pow(x, 5)+pow(x, 3)*pow(y, 2)+pow(y, 4);
        }
        cout<<"f("<<x<<", "<<y<<") = "<<result<<endl;
    }
    return 0;
}
