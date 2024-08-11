#include <iostream>
 #define MAX 5
 using namespace std;
 void sort(int arr[]) {
 int i=0,j=0,temp;
 for(i=0; i<MAX; i++){
 for (j=i+1; j<MAX; j++) {
 if (arr[j]>arr[i]) {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp; } }
 }
 }
 void Display(int arr[]){
 int i=0;
 cout <<"Modified Array is: "<< endl;
 for(i=0; i<MAX; i++){
 cout<<arr[i]<<" "; }
 }
 void search(int arr[],int t) {
 int i=0;
 for ( i = 0; i < MAX; i++) {
 if (arr[i] == t) {
 cout << t << " found at index " << i << endl;
 return; }
 }
 cout << t << " not found in the list." << endl;
 }
 void deleteNumber(int arr[],int t) {
 int i=0, j=0;
 for (i = 0; i<MAX; i++) {
 if (arr[i] == t) {
 for (j = i; j<MAX; j++) {
 
 arr[j] = arr[j + 1]; }
 cout <<t<< " has been deleted." << endl;
 return; }
 }
 cout << t << " not found in the list, so cannot be deleted." << endl;
 }
 void update(int arr[],int oldValue, int newValue) {
 for (int i = 0; i < MAX; i++) {
 if (arr[i] == oldValue) {
 arr[i] = newValue;
 cout << oldValue << " has been updated to " << newValue << endl;
 return; }
 }
 cout << oldValue << " not found in the list, so cannot be updated." << endl;
 }
 int main() {
 cout<<"Name-Saksham Latwal\n";
 int choice,i=0,arr[MAX],k;
 cout<<"Enter the element of the array\n";
 for(i=0; i<MAX; i++)
{
 cin>>arr[i];
}
while (choice!=5) {
 cout << "\nWhat to do?\n: " << endl;
 cout << "1. Sort Numbers" << endl;
 cout << "2. Search Number" << endl;
 cout << "3. Update Number" << endl;
 cout << "4. Delete Number" << endl;
 cout << "5. Exit" << endl;
 cin >> choice;
 switch (choice) {
 case 1:
 sort(arr);
 Display(arr);
 break;
 case 2:
 cout << "Enter the number to search: ";
 cin >> k;
 search(arr,k);
 break;
 case 3:
 int oldValue, newValue;
 cout << "Enter the old value: ";
 cin >> oldValue;
 cout << "Enter the new value: ";
 cin >> newValue;
 update(arr,oldValue, newValue);
 Display(arr);
 break;
 case 4:
 int Delete;
 cout << "Enter the number to delete: ";
 cin >> Delete;
 deleteNumber(arr,Delete);
 break;
 case 5:
 cout << "Thank you" << endl;
 return 0;
 default:
 cout << "Invalid choice. Please try again." << endl;
 }}
 return 0;
 }