#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;

        for (const int num : nums)
        if (i < 2 || num > nums[i - 2])
            nums[i++] = num;

        return i;
    }
};

int main()
{
    Solution s1 = Solution();
    vector<int> g1 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result = s1.removeDuplicates(g1);
    for (int i = 0; i < g1.size(); i++)
    {
        cout << g1[i] << endl;
    }

    cout << "The result is: " << result;

    return 0;
}