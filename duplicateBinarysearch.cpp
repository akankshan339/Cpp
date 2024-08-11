#include<iostream>
#include<vector>
using namespace std;
pair<bool, int> binarySearch(vector<int>& arr, int key, int n) {
    int lb = 0, ub = n - 1, duplicate = 0;
    pair<bool, int> myPair(false, duplicate);
    while (lb <= ub) {
        int mid = lb + (ub - lb) / 2;
        if (arr[mid] == key) {
            myPair.first = true;
            // Increment the count of duplicates
            duplicate++;
            // Move to the left side to check for more duplicates
            int left = mid - 1;
            while (left >= 0 && arr[left] == key) {
                duplicate++;
                left--;
            }
            // Move to the right side to check for more duplicates
            int right = mid + 1;
            while (right < n && arr[right] == key) {
                duplicate++;
                right++;
            }
            break;  // Break out of the loop after finding duplicates
        } else if (key < arr[mid]) {
            ub = mid - 1;
        } else {
            lb = mid + 1;
        }
    }
    myPair.second = duplicate;
    return myPair;
}
int main() {
    cout<<"NAME : Akanksha Negi \nCourse :Btech CSE \nSemster :04 \nSec :A1 \nRoll No :04 \n";
    int cases, n, key;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Enter the key element to be searched:\n";
        cin >> key;
        pair<bool, int> res = binarySearch(arr, key, n);
        if (res.first)
            cout << "Element found !!! and no of copies of: " << key << " = " << res.second << endl;
        else
            cout << "Element not found!!! " << key << " and no of copies " << res.second << endl;
    }
    return 0;
}