#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> smap, tmap;
        for (int i = 0; i < s.length(); i++)
        {
            if (smap[s[i]] && smap[s[i]]!=t[i]) return false;
            if (tmap[t[i]] && tmap[t[i]]!=s[i]) return false;
            smap[s[i]] = t[i];
            tmap[t[i]] = s[i];
        }

        return true;
    }
};

int main()
{
    // map<char, int> _map_ = {{'a', 1}};
    string s = "paper";
    string t = "title";
    Solution S = Solution();
    bool result = S.isIsomorphic(s, t);
    cout << result;
    return 0;
}