#include<iostream>
#include<vector>
using namespace std;
pair<bool ,int> binarySearch(vector<int>&arr , int key , int n)
{
    int lb=0, ub=n-1, comparison=0;
    pair<bool, int>myPair(false,comparison);
    while(lb <= ub)
    {
        int mid= lb+ (ub - lb) /2;
        if(arr[mid] == key )
        {
            myPair.first=true;
            myPair.second=comparison +1;
        }
        if(key < arr[mid])
            ub=mid-1;
        else
            lb=mid+1;
    comparison++;
    }
    return myPair;
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
    pair <bool, int>res =binarySearch(arr,key,n);
    if(res.first)
    cout<<"Element "<<key <<"found !!! and no of comparisons: "<<res.second<<endl;
    else
    cout<<"Element not found!!! and no of comparisons"<<res.second<<endl; 
    }
    
    
    

  
}