#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        vector<char> input;
        for (int i = 0; i < s.length(); i++)
        {
            if (
                (char(s[i]) >= 48 && char(s[i]) <= 57) || (char(s[i]) >= 65 && char(s[i]) <= 90) || (char(s[i]) >= 97 && char(s[i]) <= 122))
            {
                input.push_back(tolower(s[i]));
            }
        }
        int matchCount = 0;
        int charCount = ceil(input.size() / 2);

        for (int i = 0; i < input.size(); i++)
        {
            // cout<< ;
            if ((input[i] == input[input.size() - i - 1]) && (i < input.size() - i - 1))
            {
                matchCount++;
            }
        }

        cout << matchCount << ", " << charCount << endl;
        for (int i : input)
        {
            cout << "Output: " << i << endl;
        }

        if (matchCount == charCount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution s1 = Solution();
    // s1.isPalindrome("A man, a plan, a canal: Panama");
    cout << s1.isPalindrome("0p");

    return 0;
}