#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
  vector<int> ans;
  int start = 0, end = nums.size() - 1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[start] + nums[end] > target)
    {
      end--;
    }
    else if (nums[start] + nums[end] < target)
    {
      start++;
    }
    else
    {
      ans.push_back(start);
      ans.push_back(end);
      return ans;
    }
  }

  return ans;
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  vector<int> ans;
  int target = 26;
  ans = pairSum(nums, target);
  for (int val : ans)
  {
    cout << val << ", ";
  }
  return 0;
}
