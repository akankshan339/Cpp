/*#include<iostream>
#include<vector>

using namespace std;

void tripletIndices(vector<int>& arr, int n) {
    for (int i = 0; i < n; ++i) {
        int l = 0, r = n - 1;
        while (l <= r) {
            if (l != i && r != i && arr[l] + arr[r] == arr[i]) {
                cout<<"The array elements which forms the sum are :\n";
                cout << arr[l] << " " << arr[r] << " " << arr[i] << endl;
                cout<<"And their Indices are \n";
                cout << l << " " << r << " " << i << endl;
                return;
            } else if (arr[l] + arr[r] < arr[i]) {
                ++l;
            } else {
                --r;
            }
        }
    }
    cout << "No sequence found" << endl;
}

int main() {
    cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemester : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements in sorted order:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        tripletIndices(arr, n);
    }
    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

void tripletIndices(vector<int>& arr, int n) {
    for (int i = 0; i < n; ++i) {
        int l = 0, r = n - 1;
        while (l < r) {
            if (l != i && r != i) {
                int sum = arr[l] + arr[r];
                if (sum == arr[i]) {
                    cout << "The array elements which form the sum are:\n";
                    cout << arr[l] << " " << arr[r] << " " << arr[i] << endl;
                    cout << "And their Indices are:\n";
                    cout << l << " " << r << " " << i << endl;
                    return;
                } else if (sum < arr[i]) {
                    ++l;
                } else {
                    --r;
                }
            } else {
                if (l == i) ++l;
                if (r == i) --r;
            }
        }
    }
    cout << "No sequence found" << endl;
}

int main() {
    cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemester : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements in sorted order:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        tripletIndices(arr, n);
    }
    return 0;
}
