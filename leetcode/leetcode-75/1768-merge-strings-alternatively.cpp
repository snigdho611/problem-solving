#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int length;

        if (word1.length() > word2.length()) {
            length = word1.length();
        } else if (word1.length() < word2.length()) {
            length = word2.length();
        } else {
            length = word1.length();
        }

        string result;
        for (int i = 0; i < length; i++) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
        }

        return result;
    }
};

int main() {
    Solution S1 = Solution();
    S1.mergeAlternately("abcd", "pq");

    return 0;
}