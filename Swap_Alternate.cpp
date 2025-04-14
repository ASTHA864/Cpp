#include<iostream>
using namespace std;

int swapalter(int arr[] , int size)
{
  for(int i=0; i<size; i=i+2)
  if(i+1 < size)
  {
   swap(arr[i],arr[i+1]);
  }
}
int printarr(int arr[], int size)
{
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{

  int arr[6]={1,3,5,6,7,8};
 swapalter(arr,6);
 printarr(arr,6);
}