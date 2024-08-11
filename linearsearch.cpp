#include<iostream>
#include<vector>
using namespace std;
pair<bool ,int> linearSearch(vector<int>&arr , int key , int n)
{
    pair<bool, int> storePair(false,0);
    int comparison=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            storePair.first=true;
        }
        comparison++;
        storePair.second=comparison;
    }
    return storePair;
}
int main()
{
    cout<<"NAME : Akanksha Negi \nCourse :Btech CSE \nSemster :04 \nSec :A1 \nRoll No :04 \n";
    int cases, n,key;
    cout<<"Enter total no of test cases:\n";
    cin>>cases;
    for(int i=0 ;i<cases; i++)
    {
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the key element to be searched:\n";
    cin>>key;
    pair <bool, int>res =linearSearch(arr,key,n);
    if(res.first)
    cout<<"Element found !!! and no of comparisons: "<<res.second<<endl;
    else
    cout<<"Element not found and no of comparisons!!!"<<res.second<<endl; 
    }
    
    
    

  
}