#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int lb ,int mid, int ub)
{
  int N1=mid -lb +1;
  int N2=ub-mid;
  int left[N1] ,right[N2];
  for(int i=0;i<N1 ;i++)
  {
    left[i]=arr[i+lb];
  }
  for(int i=0;i<N2;i++)
  {
    right[i]=arr[i + mid+1];
  }
int i=0 , j=0 , k=lb;                //index for keeping sorted nos of arr in ans  array

while( i <N1 && j < N2)
{
    if(left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    }
    else   {
      arr[k] = right[j];
      j++;
    }
 k++;
}

while(i < N1) {
   arr[k] = left[i];
   k++;
   i++;
}
while(j < N2) {
   arr[k] = right[j];
   k++;
   j++;
}
}
void mergeSort(vector<int> &arr, int lb , int ub)
{
    if(lb < ub)
    {
        int mid =lb +(ub - lb)/2;
        mergeSort(arr, lb, mid);    //divide
        mergeSort(arr, mid+1, ub);

        merge(arr, lb , mid, ub);   //merge
    }
}

int main()
{
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

        mergeSort(arr, 0, n-1);
        cout << "After sorting \n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    return 0;
}