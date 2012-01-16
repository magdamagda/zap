#include <iostream>

using namespace std;

struct Point
{
    double x, y;
};

int main()
{
    int const w=3;
    int const k=3;
    char tab[k];
    for(int i=0; i<k; i++)
    {
        tab[i]='n';
    }
    Point p[w][k];
    for(int i=0; i<w; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout<<"wspolrzedna x:  ";
            cin>>p[i][j].x;
            cout<<"wspolrzedna y:  ";
            cin>>p[i][j].y;
            if(p[i][j].x==0 || p[i][j].y==0)
            {
                tab[j]='T';
            }
        }

    }

    for(int i=0; i<k; i++)
    {
        cout<<tab[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
