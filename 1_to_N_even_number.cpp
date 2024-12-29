#include <iostream>
using namespace std;
int main()
{
   int N;
   cout << "Enter value of N:";
   cin >> N;
   int Num = 2;
   while (Num <= N)
   {
      cout << Num << " ";
      Num = Num + 2;
   }
   return 0;
}