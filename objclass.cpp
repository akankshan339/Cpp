//create objs of class providing initial values
//also demonstrate copy constructor
#include<iostream>
using namespace std;
class student{
    int rno;
    string name;
     
    public:
    student() //default constructor
    {
        rno=0;
        name="";
    }
    student(int rlno,string Name) //parameterized constructor
    {
        rno=rlno;
        name=Name;
    }
    void setRollno(int rno)
    {
        this->rno=rno;
    }
    int getRollno()
    {
        return this->rno;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return this->name;
    }
    //copy constructor
    student(student &obj)
    {
        rno=obj.rno;
        name=obj.name;
    }

};

int main()
{
    student ob1,ob2(2,"xyz"); //default constructor and parameterized constructor

    cout<<ob1.getRollno()<<endl;
    cout<<ob1.getName()<<endl;

    cout<<ob2.getRollno()<<endl;
    cout<<ob2.getName()<<endl;

    student ob3=ob2; // copy constructor  OR
//  student ob3(ob2);
    cout<<"Copied value\n";
    cout<<ob3.getRollno()<<endl;
    cout<<ob3.getName()<<endl;
    return 0;
}