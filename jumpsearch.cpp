#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//TC O(square root n)   or O(n/m  + m-1) where m is the block size
int jumpSearch(vector<int>&arr, int key,int n)
{
int block=sqrt(n);
int prev=0;
while(arr[min(block ,n)-1] < key)   //jump
{
    prev=block;
    block=block + sqrt(n);

  if(prev >= n)
    return -1;
}
while(arr[prev] < key)     //linear search
{
    prev++;
    if(prev == min(block, n))
        return -1;
}

if(arr[prev] == key)
    return prev;

return -1;
}
int main()
{
    cout<<"NAME : Akanksha Negi \nCourse :Btech CSE \nSemster :04 \nSec :A1 \nRoll No :04 \n";
     int cases, n,key,index;
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
    index = jumpSearch(arr,key,n);
    if(index != -1)
    cout<<"Number "<<key <<" found at index "<<index<<endl;
    else
    cout<<"Element not found !!!";
    }
    return 0;
}