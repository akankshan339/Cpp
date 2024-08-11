#include <iostream>
#include <vector>
using namespace std;
pair<int ,int> insertionSort(vector<int> &arr, int n)
{
    pair<int,int> myPair;
    int shifts=0, comparisons =0;
    for(int i=1; i<n;i++)
    {
        int temp = arr[i];
        int j=i-1;
        while(j >= 0 && arr[j] >temp)
        {
            arr[j+1] =arr[j];
            j--;
            comparisons++;
            shifts++;
        }
        arr[j+1] = temp;
         shifts++;
    }
    myPair.first=shifts;
    myPair.second=comparisons;
return myPair;
}
int main() {
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
       myPair= insertionSort(arr, n);
       cout<<"No of comparisons required for sorting are:"<<myPair.second<<endl;
       cout<<"No of shifts required for sorting are:"<<myPair.first<<endl;
    }
    return 0;
}