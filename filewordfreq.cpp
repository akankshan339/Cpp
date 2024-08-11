// Write a program to search any given word in a given file. Also show its frequency
#include<iostream>
#include<fstream>   
//#include<string>
using namespace std;
int main()
{
    int freq=0;
    string st,wd,searchwd;
    ofstream on;    //obj creation
     //opening file using member function open() and writing into it
     on.open("sample1.txt");     //creating object of ifstream class that is dervied from fstream class and opening the file sample1.txt
    on<<"This is writing into file\n"; 
    on<<"This is me writing into same file\n"; 
    on<<"This is also written by me into file"; 
    on.close();

   ifstream in;
   in.open("sample1.txt");
   // getline(in,st);                 
   // cout<<st<<endl;
    cout<<"Enter the word to be searched in the file\n";
    cin>>searchwd;
    while(in.eof()==0)     //reading the whole file 
    {
        in>>wd;
        if(wd==searchwd)
        freq++;
    }
    cout<<"frequency o fsearched word is :"<<freq;
    in.close();
    return 0;
}