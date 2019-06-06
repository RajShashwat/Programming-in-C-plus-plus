#include<iostream>
using namespace std;
class Box
{
public:
    int length;
    int breath;
    int height;
    Box(int l,int b, int h)
    {
        length=l;
        breath=b;
        height=h;
    }
    int calVolume(void)
    {
         return length*breath*height;
    }
};
int main()
{
    Box b1(5,9,6);
    int Vol=b1.calVolume();
    cout<<Vol;
    Box b2(5,6,5);
    int Vol2=b2.calVolume();
    cout<<Vol2;

    return 0;
}
