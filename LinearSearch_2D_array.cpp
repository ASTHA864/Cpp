#include<iostream>
using namespace std;
bool isSearch(int arr[][3], int target,int i,int j)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }

    }
    return 0;
}
int main()
{
    int  arr[3][3];
    cout<<"Enter Elements:";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
          
        }
    }
  cout<<"Enter the element to be search for:";
  int target;
  cin>>target;
  if(isSearch(arr,target,3,3))
  {
    cout<<"found";
  }
  else{
    cout<<"not found";
  }
   return 0;
}