//overload binary operator + to add 2 integer attribute values of 2 objects
#include<iostream>
using namespace std;
class A
{
 int n;
 public:
    void setValue(int n)
    {
        this->n=n;
    }
    void print()
    {
        cout<<"sum ="<<n;
    }
A operator +(A obj)
{ 
    A ob;
    ob.n=n+obj.n;
    return ob;
}
};
int main()
{
    A ob1,ob2,ob3;
    int n1=0,n2=0;
    cout<<"Enter first no:\n";
    cin>>n1;
    cout<<"Enter second no:\n";
    cin>>n2;
    
    ob1.setValue(n1);
    ob2.setValue(n2);
    ob3=ob1+ob2;
    ob3.print();
    return 0;
}