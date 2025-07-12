#include <iostream>
using namespace std;

void swap(int arr[], int strat, int end)
{
  int temp = arr[strat];
  arr[strat] = arr[end];
  arr[end] = temp;
}

int main()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int size = sizeof(arr) / sizeof(int);
  int strat = 0, end = size - 1;

  for (int i = 0; i < size; i++)
  {
    if (strat < end)
    {
      swap(arr, strat, end);
    }
    strat++;
    end--;
  }

  // Printing the array:-
  cout << "Reverse the Array:= " << endl;
  for (int i = 0; i < size; i++)

  {
    cout << arr[i] << " ";
  }
  return 0;
}