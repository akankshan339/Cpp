//write a func sum(argu1,argu2) that can take any type of 2 arguments and add them.WAP to demonstrate it
#include<iostream>
using namespace std;
class base {
public:
int x,y;
};
class child : public base {
public:
int s=0;
child(int x,int y)
{
x=0;
y=0;
}
void sum(int x, int y) {
s=x+y;
}
void show() {
cout<<"Sum of a and b is:"<<s;
}
};
int main(){
child c(2,3);
c.sum(20,30);
c.show();
return 0;
}