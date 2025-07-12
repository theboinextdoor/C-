#include <iostream>
using namespace std;

int findingElement(int arr[], int target, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (target == arr[i])
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
  int target = 75;

  int size = sizeof(arr) / sizeof(int);
  int ans = findingElement(arr, target, size);
  if (ans == -1)
  {
    cout << "Given target is not present inside the array";
  }
  else
  {
    cout << "Given Target is present at index no: " << ans;
  }
  return 0;
}