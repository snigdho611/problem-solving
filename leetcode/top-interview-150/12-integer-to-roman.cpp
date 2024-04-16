#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    std::string intToRoman(int num)
    {
        std::string Roman = "";
        std::vector<std::pair<int, std::string>> storeIntRoman = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}};
            
        for (int i = 0; i < storeIntRoman.size(); i++)
        {
            while (num >= storeIntRoman[i].first)
            {
                Roman += storeIntRoman[i].second;
                num -= storeIntRoman[i].first;
            }
        }
        return Roman;
    }
};

int main()
{
    Solution s1 = Solution();
    std::cout << "1994: " << s1.intToRoman(1994) << std::endl;
    std::cout << "0: " << s1.intToRoman(0) << std::endl;
    std::cout << "216: " << s1.intToRoman(216) << std::endl;
    std::cout << "52: " << s1.intToRoman(52) << std::endl;

    return 0;
}