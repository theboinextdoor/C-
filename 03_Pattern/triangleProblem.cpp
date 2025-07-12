#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  cout << "Triangle Pattern" << endl;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  cout << "Backward Pattern\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }

  return 0;
}