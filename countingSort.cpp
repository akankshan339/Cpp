#include<iostream>
#include<vector>
using namespace std;
int maximumElement(vector<int>arr ,int n)
{
    int maxele=arr[0];
     for (int i = 0; i < n; i++)
     {
         if(arr[i] > maxele)
         maxele=arr[i];
     }
     return maxele;
}
int main()
{
     cout<<"NAME : Akanksha Negi \nCourse :Btech CSE \nSemster :04 \nSec :A1 \nRoll No :04 \n";
    int cases, n;
    cout << "Enter total no of test cases:\n";
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cout << "Enter the size of array:\n";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the array elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int maxele =maximumElement(arr ,n);
        vector<int>freq(maxele+1 ,0);
        
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
         vector<int>cumfreq(maxele+1 ,0);
         cumfreq[0]=0;
         for(int i=1;i<maxele +1;i++)
        {
            cumfreq[i]=cumfreq[i-1] +freq[i];
        }
        vector<int>res(n);
         for(int i=n-1; i>=0;i--)
         {   
            cumfreq[arr[i]]--;
            res[cumfreq[arr[i]]]=arr[i];
            
         }
       cout<<" After applying counting Sort \n";
          for (int i = 0; i < n; i++)
            cout <<res[i] <<" ";
        

    }
    
}