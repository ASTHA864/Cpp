#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, avg;
    cout << "Enter value of num1:";
    cin >> num1;
    cout << "Enter value of num2:";
    cin >> num2;
    cout << "Enter value of num3:";
    cin >> num3;
    avg= (num1 + num2 + num3) / 3;
    cout << "Average:" << avg;
    return 0;
}