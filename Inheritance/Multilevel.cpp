//Created by Shashwat Raj
#include<iostream>
using namespace std;

class Book
{
public:
    Book()
    {
        cout<<"Constructor of Book"<<endl;
    }
};
class Comic: public Book
{
public:
    Comic()
    {
        cout<<"Constructor of Comic"<<endl;
    }
};
class eBook:public Comic
{
public:
    eBook()
    {
        cout<<"Constructor of eBook"<<endl;
    }
};

int main()
{
    eBook aB;
}
