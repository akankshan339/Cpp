//sort any string
# include<iostream>
//#include <string>
using namespace std;
int main()
{
    int n,i,len;
    string str;
    char ch1,ch2,tch;
    cout<<"Enter String:\n";
    cin>>str;
    len=str.length();
    for(i=0;i<len-1;i++)
    {
        if((ch1=str.at(i)) > (ch2=str.at(i+1)))
        {
            tch=ch1;
            str.at(i)=ch2;
            str.at(i+1)=tch;
        }
    }
    cout<<"Sorted string:"<<endl;
    cout<<str;
return 0;
}