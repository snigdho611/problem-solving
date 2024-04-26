#include <algorithm>
#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums)
    {
        int n = nums.size();
        std::vector<int> output(n);
        output[0] = 1;
        for (int i = 1; i < n; i++)
        {
            output[i] = output[i - 1] * nums[i - 1];
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};

int main()
{
    std::vector<int> input = {1, 2, 3, 4};
    Solution S1 = Solution();
    std::vector<int> result = S1.productExceptSelf(input);
    for (auto i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    return 0;
}