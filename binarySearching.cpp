#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &arr , int key ,int &comparison, int n)
{
    int lb=0, ub=n-1;
    while(lb <= ub)
    {
        int mid= lb+ (ub - lb) /2;
        comparison++;
        if(arr[mid] == key ) {
          return mid;
        }
        if(key < arr[mid])
            ub=mid-1;
        else
            lb=mid+1;
    }
    return -1;
}
int main()
{
    int test , n , key ,comparison =0;
    cout<< "Enter total no of test cases :\n";
    cin >> test;
    for(int i=0;i<test ;i++)
    {
    cout<<"Enter the size of array :\n";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element to be searched:\n";
    cin>>key;
    int index=binarySearch(arr ,key ,comparison,n);
    if(index != -1)
    cout<<"Element "<<key <<"found !!! and no of comparisons: "<<comparison<<endl;
    else
    cout<<"Element "<<key <<"not found !!! and no of comparisons: "<<comparison<<endl;

    }

}