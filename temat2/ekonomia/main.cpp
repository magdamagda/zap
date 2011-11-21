#include <iostream>

using namespace std;

int main()
{
    int usa=46000;
    int china=3920;
    int year=2010;
    cout << "Year     USA          China" << endl;
    do
    {
        cout<<year<<"     $"<<usa<<"      $"<<china<<endl;
        usa=usa*1.025;
        china=china*1.09;
        ++year;
    }
    while (usa>=china);
    return 0;
}
