#include<iostream>
using namespace std;
class Base
{
private:
string name="object oriented programming";
protected:
int age;
public:
int roll_number;
};
class child_A:public Base
{
    public:
/* void setName(string name)
{
  this->name=name;//it will show error because name is private within the base class and we cannot inherit in child class//
}*/
void setAge(int age)
{
  this->age=age;
}
void getDetails()
{
    //cout<<name<<endl;//name is private//
   // cout<<age<<endl;//age is protected//
    cout<<"roll number(public) is accessible if it is inherited by a child class as public  : "<<roll_number<<endl;
}
void setRollNo(int roll_number)
{
    this->roll_number=roll_number;//we can access public variable
}
};
class child_B:private Base
{
    public:
/* void setName(string name)
{
  this->name=name;//it will show error because name is private within the base class and we cannot inherit in child class//
}*/
void setAge(int age)
{
  this->age=age;
}
void getDetails()
{
    //cout<<name<<endl;
    cout<<"age(protected) is accessible if it is inherited by a child class as private : "<<age<<endl;//age is accessible because it is protected and we make it private here//
    cout<<"roll no(public) is accessible if it is inherited by a child class as private : "<<roll_number<<endl;
}
void setRollNo(int roll_number)
{
    this->roll_number=roll_number;
}
};
class child_C:protected Base
{
    public:
/* void setName(string name)
{
  this->name=name;//it will show error because name is private within the base class and we cannot inherit in child class//
}*/
void setAge(int age)
{
  this->age=age;
}
void getDetails()
{
    //cout<<name<<endl;
    cout<<"age(protected) is accessible if it is inherited by a child class as protected  : "<<age<<endl;
    cout<<"roll number(public) is accessible if it is inherited by a child class as protected  : "<<roll_number<<endl;
}
void setRollNo(int roll_number)
{
    this->roll_number=roll_number;
}
};
 
int main()
{
    cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    child_A a1;
    a1.setRollNo(1);
    a1.getDetails();
    child_B b1;
    b1.setRollNo(4);
    b1.setAge(18);
    b1.getDetails();
    child_C c1;
    cout<<"\n\n";
    c1.setRollNo(8);
    c1.setAge(19);
    c1.getDetails();
    cout<<"child class cannot inherit private methods and varibles in any case "<<endl;
    cout<<"\n\n";
    return 0;
}
