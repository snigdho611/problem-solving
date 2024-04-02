#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int counter = 0;
        for (int i = 0; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[0] && (haystack.substr(i, needle.size()) == needle)){
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s1 = Solution();
    cout << s1.strStr("mahfuzjimmahfu", "jim");
    return 0;
}