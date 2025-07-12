#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int size = sizeof(arr) / sizeof(int);

  int maxSum = INT_MIN;
  for (int str = 0; str < size; str++)
  {
    int currSum = 0;
    for (int end = str; end < size; end++)
    {
      currSum += arr[end];
      maxSum = max(currSum, maxSum);
    }
  }

  cout << maxSum << endl;

  return 0;
}
