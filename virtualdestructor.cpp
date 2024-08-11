//parent and child class are there ,and pointer of parent of parent is reffering to obj of child then how virtual destructor of parent plays an important role
#include <iostream>
using namespace std;
class Parent {
public:
    Parent() {
        cout << "Parent constructor called." << endl;
    }
   virtual ~Parent() {
        cout << "Parent destructor called." << endl;
    }
};
class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called." << endl;
    }
   ~Child() override {
        cout << "Child destructor called." << endl;
    }
};
int main() {
      cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    Child* childObj = new Child;
    Parent* parentPtr = childObj;
    delete parentPtr;

    return 0;
}