#include <iostream>
#include<cmath>

using namespace std;

struct Point
{
    double x, y, r;
};

int main()
{
    int const n=5;
    Point array[n];
    for(int i=0; i<n; i++)
    {
        cout << "Wspolrzedna x:   ";
        cin>>array[i].x;
        cout<<"Wspolrzedna y:   ";
        cin>>array[i].y;
        array[i].r=sqrt(pow(array[i].x, 2)+pow(array[i].y, 2));
    }

    for(int i=0; i<n; i++)
    {
        cout<<array[i].x<<"     "<<array[i].y<<"    "<<array[i].r<<endl;
    }

    for(int j=n-1; j>0; j--)
   {
        for(int i=0; i<j; i++)
        {
            if(array[i].r>array[i+1].r)
            {
                //double temp=array[i].r;
               // array[i].r=array[i+1].r;
               // array[i+1].r=temp;
               swap(array[i].r, array[i+1].r);
               swap(array[i].x, array[i+1].x);
               swap(array[i].y, array[i+1].y);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<array[i].x<<"     "<<array[i].y<<"    "<<array[i].r<<endl;
    }

    return 0;
}
