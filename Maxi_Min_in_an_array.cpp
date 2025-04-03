#include<iostream>
#include<climits>
using namespace std;
int getMax(int arr[] , int size)
{
    int max= INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size)
{   
    int min=INT_MAX;
    for(int i=0; i<size; i++)

    {
    if(arr[i]<min)
    {
        min=arr[i];
    }
    }
    return min;
}
int main()
{
    int arr[6]={2,4,1,6,9,3};
    cout<<"max"<<getMax(arr,6)<<"\n";
    cout<<"min"<<getMin(arr,6);

}