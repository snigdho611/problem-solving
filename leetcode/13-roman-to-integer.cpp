#include <iostream>
#include <map>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int total = 0;
        int i = 0;

        map<char, int> roman_to_int;
        roman_to_int['I'] = 1;
        roman_to_int['V'] = 5;
        roman_to_int['X'] = 10;
        roman_to_int['L'] = 50;
        roman_to_int['C'] = 100;
        roman_to_int['D'] = 500;
        roman_to_int['M'] = 1000;

        while (i < s.length())
        {
            if (roman_to_int[s[i]] < roman_to_int[s[i + 1]])
            {
                total = total - roman_to_int[s[i]];
            }
            else
            {
                total = total + roman_to_int[s[i]];
            }
            i++;
        }

        return total;
    }
};

int main()
{
    // map<char, int> _map_ = {{'a', 1}};
    string s = "MCMXCIV";
    Solution S = Solution();
    int result = S.romanToInt(s);
    cout << result;
    return 0;
}