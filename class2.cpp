//there are2 types of header files 1)System header files 2)User Defined files:
//System header files comes with compiler
//User Defined files written by programer
#include<iostream>
#include"class2.h"//this will produce an error if class2.h is not present in current directory
using namespace std;
using namespace sp1;
// namespace sp1
// {
//     int x=10;
//     void show()
//     {
//         cout<<"hi"<<"\n";
//     }
// }

class abc
{
    public:
    void display()
    {
        cout<<"bye";
    }
};
int main()
{
    cout<<x<<"\n";
    show();
    abc ob;
    ob.display();
    return 0;
}
