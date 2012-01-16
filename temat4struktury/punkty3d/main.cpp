#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

struct Point
{
    double x, y, z, r;
};

int main()
{
    srand(time(NULL));
    int const n=5;
    Point points[n];
    for(int i=0; i<n; i++)
    {
        points[i].x=10*rand()/double(RAND_MAX)-5;
        double miny=-sqrt(25-pow(points[i].x, 2));
        double maxy=sqrt(25-pow(points[i].x, 2));
        points[i].y=miny+2*maxy*rand()/double(RAND_MAX);
        double minz=-sqrt(25-pow(points[i].x, 2)-pow(points[i].y, 2));
        double maxz=sqrt(25-pow(points[i].x, 2)-pow(points[i].y, 2));
        points[i].z=minz+2*maxz*rand()/double(RAND_MAX);
        points[i].r=sqrt(pow(points[i].x, 2)+pow(points[i].y, 2)+pow(points[i].z, 2));
    }


    for(int j=n-2; j>=0; j--)
    {
        double r=points[j].r;
        double x=points[j].x;
        double y=points[j].y;
        double z=points[j].z;
        int i=j+1;
        while(i<n && r>points[i].r)
        {
            points[i-1].r=points[i].r;
            points[i-1].x=points[i].x;
            points[i-1].y=points[i].y;
            points[i-1].z=points[i].z;
            i++;
        }
        points[i-1].r=r;
        points[i-1].x=x;
        points[i-1].y=y;
        points[i-1].z=z;
    }

    for(int i=0; i<n; i++)
    {
        cout<<points[i].x+10<<"    "<<points[i].y+7<<"    "<<points[i].z+5<<"    "<<points[i].r<<endl;
    }

    return 0;
}
