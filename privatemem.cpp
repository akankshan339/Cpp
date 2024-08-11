/*how to excess private member of class what are the options ?
(i)friend functions or friend class
(ii)inheritance: child class can access private members of base class
(iii)pointer/reference: using this keyword as it refers obj of class, Inside a member function of the same class,
(iv)providing public member functions (getters and setters) within the class.                                                                            */
#include <iostream>
using namespace std;
class student1
{
private:
    int m1, m2;
    friend int add(student1 o1);

public:
    student1(int M1, int M2)
    {
        m1 = M1;
        m2 = M2;
    }
};
int add(student1 o1)
{
    return (o1.m1 + o1.m2);
}
class  student3
{
private:
    int rno1,rno2 ;
public:
void setRollno(int rno1,int rno2)
{
    this->rno1=rno1; //without this keyword returning garvage value
    rno2=rno2;
}
int getRollno()
{
    return rno1;

}
};
class student4
{
private: // by default members are private of class
    int id;
    string name;

public:
    void setId(int ID)
    {
        id = ID;
    }
    void setName(string NAME)
    {
        name = NAME;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    void display()
    {
        cout << id << endl;
        cout << name << endl;
    }
};
int main()
{
    student1 ob1(30, 40);
    int sum = add(ob1);
    cout << "the sum : " << sum << endl;

    student3 ob3;
    ob3.setRollno(4,5);
    cout<<ob3.getRollno()<<endl;

    student4 ob;
    ob.setId(220113099);
    ob.setName("Akanksha");
    cout << "ID : " << ob.getId() << endl;
    cout << "NAME : " << ob.getName() << endl;
    // OR
    ob.display();

    return 0;
}