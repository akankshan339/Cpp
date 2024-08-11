//create obj at run also write code to delete obj dynamically :(using delete keyword)
//objects are deleted automatically after obj goes out of scope by destructor

#include<iostream>
using namespace std;
class simpleIntrest
{ int principal,time;
float rate,intrest,amt;
public:
simpleIntrest();
simpleIntrest(int p,float r,int t);
float calculate(int p,float r,int t)
{
    intrest=(p*r*t)/100;
    amt=p+intrest;
    cout<<"INTREST : "<<intrest<<endl;
    return amt;
}
};
simpleIntrest::simpleIntrest()
{
    principal=0;
    rate=0.0;
    time=0;
    intrest=0.0;
    amt=0.0;
}
simpleIntrest::simpleIntrest(int p,float r,int t)
{
    principal=p;
    rate=r;
    time=t;
    intrest=0.0;
    amt=0.0;
}
int main()
{
   //simpleIntrest ob1,ob2;
    int p,t;
    float r;
    cout<<"Enter principal rate and time \n";
    cin>>p>>r>>t;
    
    simpleIntrest ob1,ob2(p,r,t); //write this line or pass p,r,t directly while creating ob2
    cout<<"AMOUNT : "<<ob2.calculate(p,r,t)<<endl;

    return 0;
}