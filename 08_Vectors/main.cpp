#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;
  cout << "Size:-" << vec.size() << endl;

  vec.push_back(9);
  cout << "After Push back:- " << vec.size() << endl;

  cout << "Element inside the vector:- ";
  for (int val : vec)
  {
    cout << val << " ";
  }

  vec.pop_back();
  cout << "\nAfter Pop from back the size is :- " << vec.size() << endl;
  vec = {1, 2, 3, 4, 5, 6, 7, 7, 89};

  cout << "Vectors Fornula:- " << endl;
  cout << "Front Value : " << vec.front() << endl;
  cout << "Back Value: : " << vec.back() << endl;
  cout << "Value at 4: " << vec.at(4) << endl;
  cout << "Value at 5: " << vec.at(5) << endl;
  cout << "Value at 6: " << vec.at(6) << endl;
  return 0;
}