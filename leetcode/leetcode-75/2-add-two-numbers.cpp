#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
    //    public:
    //     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    //     }
};

int main() {
    Solution S1 = Solution();
    // std::vector<int> input = {0, 1, 0, 0, 2, 0, 0, 3, 0, 0};
    ListNode* L1 = new ListNode(5);
    ListNode* L2 = new ListNode(5, L1);
    std::cout << L1->val;
    // L1->next = *L1;
    // S1.addTwoNumbers(L1, L2);
    return 0;
}