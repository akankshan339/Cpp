//WAP to demonstrate pure virtual functions and abstract classes
#include<iostream>
using namespace std;
class base{  //This is an abstract class
    public:
  virtual  void show()=0;  //This is pure virtual function
    
};
class child1: public base{
    public:
    void show()  //ovveride
    {
        cout<<"This is child 1 class \n";
    }
};
class child2: public base{  //This also becomes an abstract class
    public:
  /*  void show()  //did'nt overide the base class
    {
        cout<<"This is child 2 class \n";
    }*/
};
int main()
{
    
    cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
  //  base b;  // cannot make object of base it is an abstract class
    base *bptr[2];
    child1 c1;
     bptr[0]=&c1;
    // child2 c2;  //cannot make object of child2 of an abstract class
    //  bptr[1]=&c2;
    bptr[0]->show(); //this will call child class show func bcz base class show is pure virtual func
   // bptr[1]->show();
    return 0;
}





