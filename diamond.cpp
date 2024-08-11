//WAP demonstrate diamond problem .Also update same program to resolve it 
#include<iostream>
using namespace std;
class A {
public:
//int x;
A()
{
    cout<<"Default Constructor A \n";
}
A(int x)
{
    cout<<"Parameterized Constructor A \n";
}
~A()
{
    cout<<"Destructor A \n";
}
void show()
{
    cout<<"Solved Diamond Problem\n";
}
};
class B :public virtual A{
public:
B()
{
    cout<<"Default Constructor B \n";
}
B(int x):A(x)
{
    cout<<"Parameterized Constructor B \n";
}
~B()
{
    cout<<"Destructor B \n";
}
};
class C:public virtual A {
 public:
C()
{
    cout<<"Default Constructor C \n";
}
C(int x):A(x)
{
    cout<<"Parameterized Constructor C \n";
}
~C()
{
    cout<<"Destructor C \n";
}
};
class D :public B,public C {
public:
D()
{
    cout<<"Default Constructor D \n";
}
D(int x):B(x),C(x),A(x)  //Diamond problem : indirect nonvirtual base class is not allowed
{
    cout<<"Parameterized Constructor D \n";
}
~D()
{
    cout<<"Destructor D \n";
}
};
int main()
{
    cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    D d1(20);
    d1.show();  //show function is ambiguous 
    return 0;
}



