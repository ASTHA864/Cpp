#include <iostream>
using namespace std;

void arraySum(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];
    cout << "Enter Elements:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing array:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "Sum is:";
    arraySum(arr);
}