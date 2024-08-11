#include <iostream>
#include <vector>
using namespace std;
pair<int ,int> selectionSort(vector<int> &arr, int n)
{
    pair<int,int> myPair;
    int swaps=0, comparisons =0;
    for(int i=0; i<n-1;i++)
    {
      int min_idx =i;
      for(int j=i+1;j<n;j++)
      {
        comparisons++;
        if(arr[j] < arr[min_idx])   {
            min_idx=j;
        }
         if(i != min_idx)
            swap(arr[i], arr[min_idx]);
      } 
       swaps++;     
    }
    myPair.first=swaps;
    myPair.second=comparisons;
return myPair;
}
int main() {
   // cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemester : 04 \nSec : A1 \nRoll No : 04 \n";
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
       myPair= selectionSort(arr, n);

       cout<<"sorted arry is :"<<endl;
       for (int i = 0; i < n; i++)
            cout<< arr[i] <<" ";
       cout<<"\nNo of comparisons required for sorting are:"<<myPair.second<<endl;
       cout<<"No of swaps required for sorting are:"<<myPair.first<<endl;

    }
    return 0;
}