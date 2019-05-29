//Created by Shashwat Raj
#include<iostream>
using namespace std;

class Book
{
public:
    Book()
    {
        cout<<"Base Class Constructor:Book"<<endl;
    }
};
class Comic:public Book
{
public:
    Comic()
    {
        cout<<"Derived class Constructor:Comic"<<endl;
    }
};

int main()
{
    Comic c;
}
