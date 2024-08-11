#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high)
{ 
  int pivot=arr[high];
  //Index of smaller element and Indicate the right position of pivot found so far
  int i=(low-1);
  for(int j=low;j<=high;j++)
  {
    if(arr[j]<pivot)        //If current element is smaller than the pivot
    {
      i++;                  //Increment index of smaller element
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
           
void quickSort(vector<int> &arr,int low,int high)
{
  if(low < high)    {
    int pi=partition(arr,low,high); //pi is the partition index 
    
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
             
 
int main() {
     cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemester : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cout << "\nEnter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements :\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
  
        quickSort(arr,0,n-1);
        cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
    }
}

