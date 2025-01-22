#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double result = 1;
        while (n)
        {
            if (n % 2)
            {
                if (n > 0)
                {
                    result *= x;
                }
                else
                {
                    result /= x;
                }
            }
            x = x * x;
            n /= 2;
        }
        return result;
    }
};

int main()
{
    Solution S1 = Solution();
    cout << S1.myPow(2.00000, 10);
    return 0;
}