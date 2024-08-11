#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,big;
    cout<<"enter the value of a,b,c "<<'\n';
    cin>>a; // OR cin>>a>>b>>c;
    cin>>b;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        big=a;
        else
        big=c;
        }
        else
        {
            if(b>c)
            big=b;
            else
            big=c;
        }
    cout<<"biggest no is "<<big;
    return 0;
}

