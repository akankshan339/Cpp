#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,sal;
    cout<<"enter the salary "<<'\n';
    cin>>sal;
    for(i=1;i<=30;i++)
    {
        if(i%2==0)
        continue;
    
    if(sal==0)
    break;
    sal=sal-100;
    }
    cout<<sal;
    return 0;
}
