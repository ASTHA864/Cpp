#include <iostream>
using namespace std;

bool isSearch(int arr[], int target, int i)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int arr[5];
    cout << "Enter value:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "printing elements:";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout<<endl;
    cout << "Enter element to be search for:";
    int target;
    cin >> target;
  
    if(isSearch(arr, target, 5))
        
    {
        cout << "found";
       
    }
    else
    {
        cout << "not found";
    }
    return 0;
}