#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
 for(int i=1;i<n;i++)
    {
        int j=i-1;
       int  temp =arr[i];
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] =temp;
    }
}
bool findDuplicate(vector<int> &arr, int n)
{
    bool ans=false;
   for(int i=0; i<n-1 ;i++)
    {
        if(arr[i] == arr[i+1])
        {
        ans= true;
        return ans;
        }
    }
    return ans;
}
int main()
{
     cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemester : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n;
    pair<int,int> myPair;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements :\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        insertionSort(arr,n);
        cout<<"After sorting \n";
        for (int i = 0; i < n; i++)
            cout<< arr[i] <<" ";
       bool ans= findDuplicate(arr, n);
       if(ans)
       cout<<"\nYES duplicates are present\n";
       else
       cout<<"\nNO duplicate\n";
    }
    return 0;
}