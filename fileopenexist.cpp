//WAP to open an existing file then write something into it and the read from start and disply on console
#include<iostream>
#include<fstream>   
//#include<string>
using namespace std;
int main()
{
     cout<<"NAME : Akanksha Negi \n"<<"Sec: A1\n"<<"Roll No : 04\n";
    string st;
    //string st;
    // ofstream on;    //obj creation
    //  //opening file using member function open() and writing into it
    //  on.open("sample1.txt");     //creating object of ifstream class that is dervied from fstream class and opening the file sample1.txt
    // on<<"This is writing into file\n"; 
    // on<<"This is me writing into same file\n"; 
    // on<<"This is also written by me into file"; 
    // on.close();

   ifstream in;
   in.open("sample1.txt");
   // getline(in,st);                 
   // cout<<st<<endl;

    while(in.eof()==0)     //reading the whole file 
    {
    getline(in,st);                 
    cout<<st<<endl;
    }
    in.close();
    return 0;
}