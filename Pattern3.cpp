#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value:";
    cin >> n;
    int i = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}