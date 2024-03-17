#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int iterator = 0;
        int price = prices[0], profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            profit = profit > prices[i] - price ? profit : prices[i] - price;
            price = prices[i] < price ? prices[i] : price;
            cout << profit << ", " << price << endl;
        }

        return profit;
    }
};

int main() {
    // vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<int> numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // vector<int> numbers = {1, 9, 3, 7, 5, 6, 4, 8, 2, 10};
    vector<int> numbers = {7, 1, 5, 3, 6, 4};

    Solution S = Solution();

    cout << S.maxProfit(numbers);

    return 0;
}