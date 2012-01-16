#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream plk("plik.txt");
    int n=0;
    int lines=1;
    double w;
    while(plk.good())
    {
        char c=char(plk.get());
        if(plk.good())
        {
            cout<<c;
            n++;
            if(c=='\n')
            lines++;
        }
    }
    cout<<endl<<n<<endl<<lines;
   w=double(n+lines)/1024;
   cout<<endl<<w;

  ofstream plik("plik.txt", ios::app);
  plik<<"Liczba wierszy w pliku jest rowna:  "<<lines<<endl;
  plik<<"Liczba znaków jest rowna:   "<<n<<endl;
  plik<<"wielkosc pliku:   "<<w<<endl;
  // plik.put(lines);


   // while(plk.good())
  //  {
    //    string line;
    //    getline(plk, line);
     //   cout<<line;
   // }
    return 0;
}
