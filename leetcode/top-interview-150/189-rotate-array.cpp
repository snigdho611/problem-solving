#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// using namespace std;

class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {
        k = k % nums.size();
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin() + k);
        std::reverse(nums.begin() + k, nums.end());
    }
};

int main()
{
    Solution s1 = Solution();
    std::vector<int> nums = {1, 2, 3, 4, 5};
    s1.rotate(nums, 3);

    return 0;
}