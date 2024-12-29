#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter value of N:";
    cin >> N;
    int Num = 1;
    int sum = 0;
    while (Num <= N)
    {
        sum = sum + Num;

        Num = Num + 1;
    }
    cout << sum << " ";
    return 0;
}