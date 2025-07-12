#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  cout << "Number Pattern";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << j;
    }
    cout << endl;
  }

  cout << "\nAlphabet Pattern" << endl;
  char ch = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }

  cout << "\nIncreasing Number Pattern\n";
  int output = 1;
  int m = 3;
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cout << output;
      output++;
    }
    cout << endl;
  }
  return 0;
}