//WAP to copy values of 1 obj to another
#include<iostream>
using namespace std;
class copyobject {
public:
int x,y;
copyobject()
{
    x=50;
    y=80;
}
copyobject(copyobject &c2)
{
    this->x=c2.x;
    this->y=c2.y;
}
void  show()
{
    cout<<"The value of a and b is :"<<x<<"  "<<y;
}
};
int main() {
    cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    copyobject c1;
    copyobject c2(c1);
    c1.show();
    c2.show();
}