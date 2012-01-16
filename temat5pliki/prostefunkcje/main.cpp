#include <iostream>

using namespace std;

double absolute(double a)
{
    if(a<0)
    return -a;
    return a;
}

double fahrenheit(double f)
{
    double celsiusz=5.0/9*(f-32);
    return celsiusz;
}

 double power(double x, int y)
 {
     double result=1;
     for(int i=0; i<y; i++)
     {
         result=result*x;
     }
     return result;
 }

 void printpyramid(int h)
 {
     for(int i=0; i<h; i++)
     {
         for(int j=0; j<2*h-1-i; j++)
         cout<<" ";
         for(int z=0; z<2*i+1; z++)
         cout<<"*";
         cout<<endl;
     }
 }

int main()
{
    printpyramid(5);
    cout<<power(2, 0)<<endl;
    cout<<absolute(-6)<<endl;
    cout<<fahrenheit(40);
    return 0;
}
