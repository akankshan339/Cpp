//WAP to demonstrate late binding
#include<iostream>
using namespace std;
class base{
    public:
  virtual  void show()
    {
        cout<<"This is base class \n";
    }
};
class child: public base{
    public:
    void show()
    {
        cout<<"This is child class \n";
    }
};
int main()
{
    
    cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    base b;
    base *bptr;
    bptr=&b;
    child c;
     bptr=&c;
    bptr->show(); //this will call child class show func bcz base class show is virtual
    return 0;
}

