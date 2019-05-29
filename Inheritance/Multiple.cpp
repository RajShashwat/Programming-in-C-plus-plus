//Created by Shashwat Raj
#include<iostream>
using namespace std;

class Book
{
public:
    Book()
    {
        cout<<"Base Class Constructor of Book"<<endl;
    }
};
class Comic
{
public:
    Comic()
    {
        cout<<"Base class Constructor of Comic"<<endl;
    }
};
class eBook:public Book, public Comic
{
public:
    eBook()
    {
        cout<<"Derived Class Constructor of eBook"<<endl;
    }
};

int main()
{
    eBook eB;
}
