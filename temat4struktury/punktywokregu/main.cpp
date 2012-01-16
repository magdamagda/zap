#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

struct Point
{
    double x, y, r;
};

int main()
{
    srand(time(NULL));
    int const n=100;
    Point points[n];
    for(int i=0; i<n; i++)
    {
        points[i].x=10*rand()/double(RAND_MAX)-5;
        double miny=-sqrt(25-pow(points[i].x, 2));
        double maxy=sqrt(25-pow(points[i].x, 2));
        points[i].y=miny+2*maxy*rand()/double(RAND_MAX);
        points[i].r=sqrt(pow(points[i].x, 2)+pow(points[i].y, 2));
    }
    for(int i=0; i<n; i++)
    {
        cout<<points[i].x<<"     "<<points[i].y<<"     "<<points[i].r<<endl;
    }
    return 0;
}
