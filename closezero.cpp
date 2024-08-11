//array of integers +ve -ve nos Find 2 nos such that their sum is close to 0
//e.g {1, 60, -10, 70, -80, 85}
# include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,j,minsum,sum,n1,n2;
    cout<<"Enter the size of array:\n";
    cin>>n;
    if(n<2)
    cout<<"Invalid input:\n";
    
    cout<<"Enter the array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are:\n";
    for(j=0;j<n;j++)
    {
        cout<<arr[j]<<" , ";
    }
    sum=arr[0]+arr[1];
    n1=arr[0];
    n2=arr[1];
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
        minsum=arr[i]+arr[j];
        if(abs(minsum) < abs(sum))
        {
            sum=minsum;
            n1=arr[i];
            n2=arr[j];
        }
        }
    }
    cout<<"\nSum of nos close to zero are:\n";
    cout<<n1<<" "<<n2;
    //cout<<"Minimum sum is :"<<minsum;
    return 0;
}