#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <stack>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        stack<char> _stack_;
        map<int, char> _map_;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u' | s[i] == 'A' | s[i] == 'E' | s[i] == 'I' | s[i] == 'O' | s[i] == 'U')
            {
                // _map_.insert({i, s[i]});
                _stack_.push(s[i]);
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u' | s[i] == 'A' | s[i] == 'E' | s[i] == 'I' | s[i] == 'O' | s[i] == 'U')
            {
                s[i] = _stack_.top();
                _stack_.pop();
            }
        }

        return s;
    }
};

int main()
{
    vector<int> input = {1, 2, 3, 4};
    Solution S1 = Solution();
    cout << S1.reverseVowels("leetcode") << endl;
    cout << S1.reverseVowels("hello");
    return 0;
}