#include <iostream>
using namespace std;

int main()
{
  int decNum = 5;
  int ans = 0;
  int pow = 1;
  while (decNum > 0)
  {
    int rem = decNum % 2;
    ans += (rem * pow);
    pow *= 10;
    decNum /= 2;
  }
  cout << ans;
  return 0;
}