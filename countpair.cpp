#include<iostream>
#include<vector>
using namespace std;
int countPair( vector<int> &arr, int target, int n)
{
    int count=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i] -arr[j] == target ||arr[j] -arr[i] == target )
        count ++;
    }
}
return count;
}
int main()
{
    cout<<"NAME : Akanksha Negi \nCourse :Btech CSE \nSemster :04 \nSec :A1 \nRoll No :04 \n";
    int cases, n,target;
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
    cout<<"Enter the target element:\n";
    cin>>target;
    int count= countPair(arr, target, n);
    cout<<"Count of pairs with diff "<<target<<" is "<<count<<endl;
    }
    return 0;
}