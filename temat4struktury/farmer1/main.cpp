#include <iostream>

using namespace std;

struct Data
{
    int day;
    int month;
    int year;
};

struct Animal
{
    string name;
    double weight;
    int age;
    Data data;
};

int main()
{
    Animal cow;
    Animal pig;
    Animal dog;
    Animal hen;
    Animal goat;

    cow.name="krowa";
    cow.weight=400;
    cow.age=10;
    cow.data={24, 04, 8};

    pig.name="swinia";
    pig.weight=500;
    pig.age=9;
    pig.data={24, 04, 8};

    dog.name="pies";
    dog.weight=10;
    dog.age=6;
    dog.data={6, 05, 02};

    hen.name="kura";
    hen.weight=4;
    hen.age=1;
    hen.data={23, 02, 9};

    goat.name="koza";
    goat.weight=30;
    goat.age=4;
    goat.data={23, 02, 9};

    cout<<"nazwa     "<<"waga     "<<"wiek     "<<"data nabycia"<<endl;
    cout<<cow.name<<"    "<<cow.weight<<"       "<<cow.age<<"          "<<cow.data.day<<"."<<cow.data.month<<"."<<cow.data.year<<endl;
    cout<<pig.name<<"    "<<pig.weight<<"       "<<pig.age<<"          "<<pig.data.day<<"."<<pig.data.month<<"."<<pig.data.year<<endl;
    cout<<dog.name<<"       "<<dog.weight<<"       "<<dog.age<<"          "<<dog.data.day<<"."<<dog.data.month<<"."<<dog.data.year<<endl;
    cout<<hen.name<<"        "<<hen.weight<<"       "<<hen.age<<"          "<<hen.data.day<<"."<<hen.data.month<<"."<<hen.data.year<<endl;
    cout<<goat.name<<"       "<<goat.weight<<"       "<<goat.age<<"          "<<goat.data.day<<"."<<goat.data.month<<"."<<goat.data.year<<endl;



    return 0;
}
