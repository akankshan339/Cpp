//count total no of objs created for any given class
#include<iostream>
using namespace std;
class A
{
   private:
    static int count;//static variables are defined inside class
     public:
    A(){
        count++;
    }
    void display()
    {
        cout<<"no of objects created are : "<< count<<endl;
    }
};
int A ::count=0;//initlize static variables are declared outside class
int main()
{
    A ob1,ob2,ob3,ob4;
//this is how we print inside main but for this count should be public
//    cout<<"no of objects created are : "<< A::count<<endl;
    
    //OR  for this count can be public or private
    ob1.display();
    return 0;
}