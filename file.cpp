//WAP to read text from keyboard write to some file "sample.txt" .Then read this content and write back to console
#include<iostream>
#include<fstream>   //class
using namespace std;
int main()
{
    string st;
     //opening file using constructor and reading it
    ifstream in("sample1.txt");     //creating object of ifstream class that is dervied from fstream class and opening the file sample1.txt
    in>>st;                //reading content to string from file using the ifstream object ,this will read only 1 word upto 1st space bcz 
   cout<<st<<endl;
    getline(in,st);                 //read the whole line 
    cout<<st<<endl;
    in.close();
    return 0;
}