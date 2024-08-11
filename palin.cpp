//check whether a string is palindrome or not
# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    int i,len;
    char ch;
    string str,palinstr="";
    cout<<"Enter a string\n";
    //cin>>str; //read only one word upto space
    getline(cin, str); // read the the whole string
    len=str.length();
   int j=len-1;
    /*for(i=len-1;i>=0;i--)
    {
ch=str.at(i);
palinstr=palinstr+ch;
    }*/
    // OR using reverse function
    // reverse(str.begin(), str.end());
    for(i=0;i<len/2;i++)
    {
        char t=str.at(j);
        str.at(j)=str.at(i);
        str.at(i)=t;
        //OR
       // swap(str[i],str[j]);
        j=j-1;
    }
   // cout<<palinstr;
   cout<<str;
    return 0;
}