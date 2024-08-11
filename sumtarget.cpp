// #include<iostream>
// #include<vector>
//#include<algorithm>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemster : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n ,key;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the characters in array:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout<<"Enter key \n";
        cin>>key;
        sort(arr.begin() ,arr.end());   //O(n logn)
        int k=0 , l=n-1;
        while(k < l)    //O(n)
        {
            if(arr[k] +arr [l] == key)
            {
            cout<<"Pair found "<<arr[k] <<" "<<arr[l];
            break;
            }
            else if(arr[k] +arr [l] > key)
            l--;
            else
            k++;
            
            if (k >= l) // If k crosses l, no pair found
            cout << "No pair found with the given key.\n";

        }
    }
}
