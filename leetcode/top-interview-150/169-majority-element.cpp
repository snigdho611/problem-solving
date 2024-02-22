#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool majorityElement(vector<int>& nums){   
        int majorityCount = nums.length/2;
        for (int num : nums) {
            int count = 0;
            for (int elem : nums) {
                if (elem == num) 
                    count += 1;
            }
            if (count > majorityCount) 
                return num;
        }
        return -1; 
    }
};

int main()
{
    Solution s1 = Solution();
    vector<int> input = {1, 9, 2, 8, 3, 7, 4, 6, 5};

    s1.majorityElement(input);
    // s1.isPalindrome("A man, a plan, a canal: Panama");
    // cout << s1.isPalindrome("0p");

    return 0;
}