//Created by Shashwat Raj
//Program to preform all arithmetic operation
#include<iostream>
using namespace std;
int main()
{
    int choice;
    double n1,n2;
    while(1)
    {
    cout<<"_______________Menu_______________"<<endl;
    cout<<"1:for Addition"<<endl;
    cout<<"2:for Multiplication"<<endl;
    cout<<"3:for Subtraction"<<endl;
    cout<<"4:for division(Quotient)"<<endl;
    cout<<"5:for reminder"<<endl;
    cout<<"6:for exit"<<endl;
    cout<<"_______________Choice_______________"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        double sum;
        cout<<"---------------Input---------------"<<endl;
        cout<<"Enter first no:"<<endl;
        cin>>n1;
        cout<<"Enter second no:"<<endl;
        cin>>n2;
        sum=n1+n2;
        cout<<"---------------Output---------------"<<endl;
        cout<<"Sum="<<sum<<endl;
        break;
    case 2:
        double pro;
        cout<<"---------------Input---------------"<<endl;
        cout<<"Enter first no:"<<endl;
        cin>>n1;
        cout<<"Enter second no:"<<endl;
        cin>>n2;
        pro=n1*n2;
        cout<<"---------------Output---------------"<<endl;
        cout<<"Product="<<pro<<endl;
        break;
    case 3:
        double diff;
        cout<<"---------------Input---------------"<<endl;
        cout<<"Enter first no:"<<endl;
        cin>>n1;
        cout<<"Enter second no:"<<endl;
        cin>>n2;
        diff=n1-n2;
        cout<<"---------------Output---------------"<<endl;
        cout<<"Difference="<<diff<<endl;
        break;
    case 4:
        double quo;
        cout<<"---------------Input---------------"<<endl;
        cout<<"Enter first no:"<<endl;
        cin>>n1;
        cout<<"Enter second no:"<<endl;
        cin>>n2;
        quo=n1/n2;
        cout<<"---------------Output---------------"<<endl;
        cout<<"Quotient="<<quo<<endl;
        break;
    case 5:
        double rem;
        cout<<"---------------Input---------------"<<endl;
        cout<<"Enter first no:"<<endl;
        cin>>n1;
        cout<<"Enter second no:"<<endl;
        cin>>n2;
        rem=n1+n2;
        cout<<"---------------Output---------------"<<endl;
        cout<<"Reminder="<<rem<<endl;
        break;
    case 6:
        exit(0);
    default:
    cout<<"Invalide Choice"<<endl;
    }
}
}
