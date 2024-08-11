#include<iostream>
#include<vector>
using namespace std;

int main() {
    cout << "NAME : Akanksha Negi \nCourse : Btech CSE \nSemster : 04 \nSec : A1 \nRoll No : 04 \n";
    int cases, n;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<char> arr(n);
        cout << "Enter the characters in array:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        vector<int> freq(26, 0); 
        int maxfreq = 0;
        for (int i = 0; i < n; i++) {
            freq[arr[i] - 'a']++; // Convert character to index by subtracting 'a'
            if (freq[arr[i] - 'a'] > maxfreq)
                maxfreq = freq[arr[i] - 'a'];
        }
        
        cout << "Alphabet with maximum number of occurrences is: ";
        for (int i = 0; i < 26; i++) {
            if (freq[i] == maxfreq)
                cout << char(i + 'a') << " ";
        }
        cout << "with frequency maximum frequncy of " << maxfreq << endl;
    }
    return 0;
}
