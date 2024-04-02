#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
       if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            // [1, 1, 2, 3, 5, 8]
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        
    }
};

int main()
{
    Solution s1 = Solution();
    cout<<s1.climbStairs(6);
    return 0;
}