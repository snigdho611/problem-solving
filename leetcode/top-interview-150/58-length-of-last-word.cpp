#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int lengthOfLastWord(string s) {
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
    }
};

int main() {
    string s = " 1";

    Solution S = Solution();

    cout << S.lengthOfLastWord(s);

    return 0;
}