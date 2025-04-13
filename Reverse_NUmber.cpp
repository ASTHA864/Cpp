#include<iostream>
using namespace std;

void reversenum(int arr[], int n)
{
  int start=0;
  int end=n-1;
  while(start < end)
  {
    swap(arr[start],arr[end]);
     start++;
     end--;
  }
}
void printarray(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
   cout<<arr[i]<<" ";
  }

}
int main()
{  int n=5;
 int arr[n];
 for(int i=0; i<n; i++)
 {
  cin>>arr[i];
 }
 reversenum(arr,n);
 printarray(arr, n);

}