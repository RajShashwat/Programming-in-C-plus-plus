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
//Derived Class
class Comic: public Book
{
public:
    Comic()
    {
        cout<<"Constructor of Comic"<<endl;
    }
};
//Derived Class
class AudioBook: public Book
{
public:
    AudioBook()
    {
        cout<<"Constructor of AudioBook"<<endl;
    }
};
//Derived Class
class eBook:public Book
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
    cout<<endl;
    Comic c;
    cout<<endl;
    AudioBook Ab;
}
