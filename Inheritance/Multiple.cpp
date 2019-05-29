//Created by Shashwat Raj
#include<iostream>//Created by Shashwat Raj
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
