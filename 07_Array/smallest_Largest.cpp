#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int number[5] = {5, 6, 3, 19, -2};

  int smallest = INT_MAX, largest = INT_MIN;
  int size = sizeof(number) / sizeof(int);
  for (int i = 0; i < size; i++)
  {
    // if (number[i] < smallest)
    // {
    //   smallest = number[i];
    // }

    // if (number[i] > largest)
    // {
    //   largest = number[i];
    // }
    smallest = min(number[i], smallest); // ALternative
    largest = max(number[i], largest);   // ALternative
  }

  cout << "smallest" << smallest << endl;
  cout << "largest" << largest << endl;
  return 0;
}