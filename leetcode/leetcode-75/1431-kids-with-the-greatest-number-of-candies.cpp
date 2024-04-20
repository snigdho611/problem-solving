#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result = {};
        int max = 0;
        for (auto element : candies) {
            if (element > max) {
                max = element;
            }
        }
        for (auto element : candies) {
            if (element + extraCandies >= max) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        for (auto val : result) {
            cout << val;
        }

        return result;
    }
};

int main() {
    Solution S1 = Solution();
    vector<int> candies = {6, 4, 2, 5, 3, 1};
    int extraCandies = 3;
    S1.kidsWithCandies(candies, extraCandies);

    return 0;
}