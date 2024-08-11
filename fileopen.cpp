//WAP to open an existing file then write something into it and the read from start and disply on console
#include<iostream>
#include<fstream>   //useful clases working with files are fstream baseclass
//  ofstream derived from fstream class
//  ifstream derived from fstream class 
//2ways to open a file are ;
// (i) using constructor ie. either of ofstream or either of ifstream class
//(ii) using member function open()  of ofstream and ifstream class
using namespace std;
int main()
{
    string st1;
    //string st2="writing new content into file";
   
    //opening file using constructor and writing into it
     ofstream on("sample1.txt");     //creating object of ofstream class that is dervied from fstream class and opening the file sample1.txt
     string st2;
    cout<<"Enter the string :\n";
    cin>>st2;
    on<<st2;            //writing into file using object
    on.close();         //if not close on object ,it will not print anything while reading from the file 

     //opening file using constructor and reading it
    ifstream in("sample1.txt");     //creating object of ifstream class that is dervied from fstream class and opening the file sample1.txt
    //in>>st1;                //reading content to string from file using the ifstream object ,this will read only 1 word upto 1st space bcz 
  // cout<<st1<<endl;
    getline(in,st1);                 //read the whole line 
    cout<<st1<<endl;
    
    in.close();
    return 0;
}