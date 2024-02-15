#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return nums.size();
        }

        int index = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[index] != nums[i]){
                index++;
                nums[index] = nums[i];
            }
        }
        return index+1;
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