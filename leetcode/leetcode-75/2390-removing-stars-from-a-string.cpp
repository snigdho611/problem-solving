#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        string result = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                result.pop_back();
            }
            else
            {
                result += s[i];
            }
        }
        return result;
    }
};

int main()
{
    // cout << "Ok";
    Solution mine = Solution();
    string s = "leet**cod*e";
    std::cout << mine.removeStars(s);

    // cout << v2.size();
    return 0;
}