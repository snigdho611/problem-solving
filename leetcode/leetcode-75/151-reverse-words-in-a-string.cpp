#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
   public:
    string reverseWords(string s) {
        // Return the empty string as it is
        if (s.size() == 0) {
            return s;
        }
        stack<string> list = {};
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            // Continue to iterate through the string anytime an empty space is
            // encountered
            if (s[i] == ' ') {
                continue;
            }
            // If a non space character is encountered, store it in a variable
            // Increment as it goes through
            // This word can be pushed into a stack at the end
            string word;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            list.push(word);
        }
        // The stack contains the words now in reverse order
        // Put them into a string and return the result
        while (!list.empty()) {
            result += list.top();
            list.pop();
            if (!list.empty()) {
                result += " ";
            }
        }
        return result;
    }
};

int main() {
    Solution S1 = Solution();
    S1.reverseWords("   the sky is blue   ");

    return 0;
}