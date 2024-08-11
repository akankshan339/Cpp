//array of 10 names and sort them
# include<iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,j;
    string name[10],tstr="";
    cout<<"Enter how many names:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<"Enter names:\n";
    cin>>name[i];
    }
    cout<<"Names are:\n";
    for(i=0;i<n;i++)
    {
    cout<<name[i]<<" ";
    }
    cout <<"\nNames in before are:\n";
    for (i = 0; i < n; i++) {
        cout << name[i] <<" ";
    }
   //applying bubble sort to sort them
    for(i=0;i<n;i++)   
    {
        for(j=0;j<n-1;j++) 
        { 
        if(name[j]>name[j+1])
        {
        tstr=name[j];
         name[j]=name[j+1];
         name[j+1]=tstr; //OR
        //swap(name[j],name[j+1]);
    }
    }
    }
    cout << "\nNames in sorted order are:\n";
    for (i = 0; i < n; i++) {
        cout << name[i] << " ";
    }
    return 0;
}