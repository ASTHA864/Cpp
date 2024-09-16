#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value:";
    cin >> n;
    if (n > 0)
    {
        cout << "Positive Number";
    }
    else if (n < 0)
    {
        cout << "Negative Number";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}