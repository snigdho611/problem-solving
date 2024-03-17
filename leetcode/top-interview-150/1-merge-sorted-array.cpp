#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0)
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
    }
};

int main() {
    // cout << "Ok";
    Solution mine = Solution();
    vector<int> v1{-1, 0, 0, 3, 3, 3, 0, 0, 0};

    vector<int> v2{1, 2, 2};

    mine.merge(v1, v1.size(), v2, v2.size());

    // cout << v2.size();
    return 0;
}