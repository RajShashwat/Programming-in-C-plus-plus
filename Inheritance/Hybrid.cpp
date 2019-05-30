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
class Mythology: public Book
{
public:
    Mythology()
    {
        cout<<"Constructor of Mythology"<<endl;
    }
};
//Derived Class
class EducationalBook: public Book
{
public:
    EducationalBook()
    {
        cout<<"Constructor of educationalBook"<<endl;
    }
};
//Derived Class
class eBook:public Comic,public Mythology,public EducationalBook
{
public:
    eBook()
    {
        cout<<"Constructor of eBook"<<endl;
    }
};
//Derived Class
class AudioBook:public Comic,public Mythology
{
public:
    AudioBook()
    {
        cout<<"Constructor of AudioBook"<<endl;
    }
};
int main()
{
    Comic c;
    cout<<endl;
    Mythology m;
    cout<<endl;
    EducationalBook EB;
    cout<<endl;
    eBook eB;
    cout<<endl;
    AudioBook a1;
}
