#include <iostream>
using namespace std;

int sumofNumber(int number)
{
  int sum = 0;
  while (number > 0)
  {
    int digit = number % 10;
    sum += digit;
    number = number / 10;
  }
  return sum;
}

int main()
{
  cout << "Sum of a number : ";
  int num = 2456;
  int result = sumofNumber(num);
  cout << result;
  return 0;
}