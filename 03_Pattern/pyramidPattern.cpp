#include <iostream>
using namespace std;

int main()
{

  // *
  // ***
  // *****
  // *******
  int n = 4;
  for (int i = 0; i < n; i++)
  {
    // for blank space
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }

    cout << endl;
    for (int j = i + 1; j > 0; j--)
    {
      cout << "*";
    }
    for (int j = n - 1; j > 0; j--)
    {
      cout << " ";
    }
  }

    return 0;
}
