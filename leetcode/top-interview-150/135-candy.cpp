#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    int candy(std::vector<int> &ratings)
    {
        int min = ratings[0], max = 0;
        for (int i = 0; i < ratings.size(); i++)
        {
            if (min < ratings[i])
            {
                min = ratings[i];
            }

            if (max > ratings[i])
            {
                max = ratings[i];
            }
        }

        for (int i = 0; i < ratings.size(); i++){
            ratings[i] -= min;
        }


        std::cout << min << ", " << max << std::endl;

        return 0;
    }
};

int main()
{
    Solution s1 = Solution();
    std::vector<int> kids;
    kids.push_back(1);
    kids.push_back(2);
    kids.push_back(7);
    kids.push_back(4);
    kids.push_back(3);
    std::cout << s1.candy(kids) << std::endl;

    return 0;
}