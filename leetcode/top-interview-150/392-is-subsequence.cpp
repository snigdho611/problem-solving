#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    bool isSubsequence(string s, string t) {
        for (int i = 0; i < s.length(); i++) {
            if (t[i] && s[i] == t[i]) {
                // continue;
            } else {
                t.erase(i, 1);
                // return false;
            }
        }

        cout << s << ", " << t;

        if (s == t) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    // vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<int> numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // vector<int> numbers = {1, 9, 3, 7, 5, 6, 4, 8, 2, 10};
    // vector<int> numbers = {7, 1, 5, 3, 6, 4};
    string s = "test", t = "tqesssssssswbst";

    Solution S = Solution();

    cout << S.isSubsequence(s, t);

    return 0;
}