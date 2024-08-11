//overload binary operator + to add 2 strings

#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
class A
{
private:
 string a;
public:
 void set_a(string a)
 {
 this->a=a;
 }
 A operator+(A c)
 
 { A temp;
 temp.a=a.append(c.a);
 return temp;
 }
 void show()
 {
 cout<<"New string="<<a;
 }
};
int main()
{ 
 A a1,a2,a3;
 string x,y;
 cout<<"Enter first string :";
 cin>>x;
 cout<<"Enter second string:";
 cin>>y;
 a1.set_a(x);
 a2.set_a(y);
 a3=a1+a2;
 a3.show();
 return 0;
}
