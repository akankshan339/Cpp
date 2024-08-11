//WAP to handle exception that occurs during division and denominator is zero
#include<iostream>
using namespace std;
int main()
{
 cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    int x,y,z=0;
    cout<<"Enter the value of x numerator and denominator y \n";
    cin>>x >>y;
    z=x/y;
try{
    if(y==0)
    throw 50;
    else
    z=x/y;
}
catch(int p) {
    cout<<"You are trying to divide by zero \n";
    cout<<"after dividing "<<z;
}
}