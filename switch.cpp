#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,ch;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"Enter your choice "<<"\n";
    cin>>ch;
    switch (ch)
    {
    case1:
        cout<<"sum of a +b="<<a+b<<endl;
        break;
        case2:
        cout<<"difference of a -b="<<a-b<<endl;
        break;
        case3:
        cout<<"multiplication of a *b="<<a*b<<endl;
        break;
        case4:
        if (b!=0)
        cout<<"division of a %b="<<a%b<<endl;
        else
        cout<<"cannot be divide by 0 "<<"\n";
        break;
    
    default:
    cout<<"operation cannot be performed"<<endl;
        break;
    }
    return 0;
}
