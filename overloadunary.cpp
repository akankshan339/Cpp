// overload ++ operator for both prefix and postfix so that when it apply for
// class A it increase value of all attributes by 1
// class A atributes are a=1,b=2,c=3 output :a=2 b=3 c=4
#include <iostream>
using namespace std;
class A
{
    int a, b, c;
    public:
    A()
    {
        a = 1;
        b = 2;
        c = 3;
    }
    A(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void print()
    {
        cout << "a=" << a << " b=" << b << " c=" << c << endl;
    }
    void operator ++()
    {
        ++a;
        ++b;
        ++c;
    }
    void operator ++(int)
    {
        a++;
        b++;
        c++;
    }
};
int main()
{
    A ob;
    cout<<"Before incremeant :\n";
    ob.print();
    ++ob;
    cout<<"After prefix incremeant :\n";
    ob.print();
    ob++;
    cout<<"After postfix incremeant :\n";
    ob.print();
    return 0;
}