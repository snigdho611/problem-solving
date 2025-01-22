#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxReach < i)
            {
                return false;
            }

            maxReach = max(maxReach, i + nums[i]);
        }

        return true;
    }
};

int main()
{
    vector<int> input = {3, 2, 1, 0, 4};
    Solution S1 = Solution();
    cout << S1.canJump(input);
    return 0;
}