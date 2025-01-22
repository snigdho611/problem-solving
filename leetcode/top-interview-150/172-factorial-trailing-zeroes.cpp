#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        int count = 0;
        for (long long i = 5; n / i; i *= 5)
            count += n / i;
        return count;
    }
};

int main()
{
    // vector<int> input = {3, 2, 1, 0, 4};
    int input = 5;
    Solution S1 = Solution();
    cout << S1.trailingZeroes(input) << endl;
    return 0;
}