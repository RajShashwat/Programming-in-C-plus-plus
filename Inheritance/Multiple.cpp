//Created by Shashwat Raj
#include<iostream>
using namespace std;
//Base Class
class Book
{
public:
    Book()
    {
        cout<<"Constructor of Book"<<endl;
    }
};
//Base Class
class Comic
{
public:
    Comic()
    {
        cout<<"Constructor of Comic"<<endl;
    }
};
//Derived Class
class eBook:public Book, public Comic
{
public:
    eBook()
    {
        cout<<"Constructor of eBook"<<endl;
    }
};

int main()
{
    eBook eB;
}
