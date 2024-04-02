#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> tracker1, tracker2;

        if(s.size() != t.size()){
            return false;
        }

        for (int i = 0; i < s.size(); i++)
        {
            tracker1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++)
        {
            tracker2[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(tracker1[s[i]] == tracker2[s[i]]){
                continue;
            }else{
                return false;
            }
        }
        
        for (map<char, int>::iterator it = tracker2.begin(); it != tracker2.end(); ++it)
        {
            cout << it->first << ": " << it->second << endl;
        }

        return true;
    }
};

int main()
{
    Solution s1 = Solution();
    s1.isAnagram("anagram", "mranaga"); //nagaram
    return 0;
}