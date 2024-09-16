#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value:";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            cout << "Not Prime Number";
            break;
        }
        else
        {
            cout << "Prime Number";
            break;
        }
    }
    return 0;
}