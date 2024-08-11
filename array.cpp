//enter 10 nos and do sorting searching deletation and updation i.e insertion using functions
# include<iostream>
using namespace std;
void sortNo(int arr[],int  n)
{
//sorting in ascending order
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-1);j++)
{
if(arr[j] > arr[j+1])
{
   int  temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
}
}
}
cout<<"\nSorted array is\n";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}

void searchNo(int arr[],int n,int ele)
{
    int flag=0,i;
for(i=0;i<n;i++)
{
    if(arr[i]==ele)
    {
    flag=1;
    break;
    }
}
if(flag==1)
cout<<"Searched Element "<<ele<<" is at index "<<i;
}

void deleteNo(int arr[],int n,int delno)
{
int i,k;
for(i=0;i<n;i++)
{
    if(arr[i]==delno)
     {
        k=i;
        break;
     }
     }
     for(i=k;i<n;i++)
    {
    arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
    cout<<arr[i]<<" ";
    }
}

void insertNo(int arr[],int n,int newno,int index)
{
    int i,k;
    for(i=n-1;i>=index;i--)
    {
    arr[i+1]=arr[i];
     }
     arr[index]=newno;
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[11],i,n,ele,delno,newno,index;
    cout<<"Enter the no of elements to be entered in array\n";
    cin>>n;
    cout<<"Enter the array Elements:\n";
    for(i=0;i<n;i++)
    {
cin>>arr[i];
cout<<arr[i]<<" ";
    }
sortNo(arr,n);

cout<<"\nEnter the element to be  searched\n";
cin>>ele;
searchNo(arr,n,ele);

cout<<"\nEnter the number to be deleted\n";
cin>>delno;
deleteNo(arr,n,delno);

cout<<"\nEnter the number to be inserted\n";
cin>>newno;
cout<<"\nEnter the index where no is to be inserted\n";
cin>>index;

insertNo(arr,n,newno,index);

return 0;
}