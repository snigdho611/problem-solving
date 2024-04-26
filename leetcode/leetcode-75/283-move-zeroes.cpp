#include <iostream>
#include <vector>

class Solution {
   public:
    void moveZeroes(std::vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

int main() {
    Solution S1 = Solution();
    std::vector<int> input = {0, 1, 0, 0, 2, 0, 0, 3, 0, 0};
    S1.moveZeroes(input);
    return 0;
}