#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int size = sizeof(arr) / sizeof(int);

  int maxSum = INT_MIN, currSum = 0;
  for (int i = 0; i < size; i++)
  {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << "Max sum is :-" << maxSum;

  return 0;
}