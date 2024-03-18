#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine){
        map<char, int> mp1;
        map<char, int> mp2;
        for (auto i : ransomNote)
            mp1[i]++;
        for (auto i : magazine)
            mp2[i]++;
        for (auto it : mp1)
        {
            if (!mp2[it.first])
                return false;
            if (it.second > mp2[it.first])
                return false;
        }
        return true;
    }
};

int main(){
    // map<char, int> _map_ = {{'a', 1}};
    string magazine = "aab";
    string ransomNote = "aa";
    Solution S = Solution();
    bool result = S.canConstruct(ransomNote, magazine);
    cout << result;
    return 0;
}