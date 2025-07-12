#include <iostream>
using namespace std;

int main()
{
  int marks[5]; // Declaration and Initialization of an Array
  int sizeOfArray = sizeof(marks) / sizeof(int);
  cout << "Size of an Array is :- " << sizeOfArray << endl;

  // Taking Input in an Array:-
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << "Enter " << i << "th Element:- ";
    cin >> marks[i];
  }

  // Printing Output of an Array:-
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << i << "th Element " << marks[i] << endl;
  }
  return 0;
}