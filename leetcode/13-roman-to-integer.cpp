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

        while (i < s.length())
        {
            switch (s[i])
            {
            case 'I':
            {
                if (s[i + 1] && s[i + 1] == 'V')
                {
                    cout << "Adding 4..." << endl;
                    total = total + 4;
                    i = i + 2;
                }
                else if (s[i + 1] && s[i + 1] == 'X')
                {
                    cout << "Adding 9..." << endl;
                    total = total + 9;
                    i = i + 2;
                }
                else
                {
                    cout << "Adding 1..." << endl;
                    total = total + 1;
                    i = i + 1;
                }
                break;
            }

            case 'V':
            {
                cout << "Adding 5..." << endl;
                total = total + 5;
                i = i + 1;
                break;
            }

            case 'X':
            {
                if (s[i + 1] && s[i + 1] == 'L')
                {
                    cout << "Adding 50..." << endl;
                    total = total + 40;
                    i = i + 2;
                }
                else if (s[i + 1] && s[i + 1] == 'C')
                {
                    cout << "Adding 90..." << endl;
                    total = total + 90;
                    i = i + 2;
                }
                else
                {
                    cout << "Adding 10..." << endl;
                    total = total + 10;
                    i = i + 1;
                }
                break;
            }

            case 'L':
            {
                cout << "Adding 50..." << endl;
                total = total + 50;
                i = i + 1;
                break;
            }

            case 'C':
            {
                if (s[i + 1] && s[i + 1] == 'D')
                {
                    cout << "Adding 400..." << endl;
                    total = total + 400;
                    i = i + 2;
                }
                else if (s[i + 1] && s[i + 1] == 'M')
                {
                    cout << "Adding 900..." << endl;
                    total = total + 900;
                    i = i + 2;
                }
                else
                {
                    cout << "Adding 100..." << endl;
                    total = total + 100;
                    i = i + 1;
                }
                break;
            }

            case 'D':
            {
                cout << "Adding 500..." << endl;
                total = total + 500;
                i = i + 1;
                break;
            }

            case 'M':
            {
                cout << "Adding 1000..." << endl;
                total = total + 1000;
                i = i + 1;
                break;
            }

            default:
                break;
            }
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