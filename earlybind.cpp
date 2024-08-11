//WAP to demonstrate early binding
#include<iostream>
using namespace std;
class base{
    public:
    void show()
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
    child c;
    c.show(); //this will call child class show func
    c.base::show();  //this will call base class show func
    return 0;
}

