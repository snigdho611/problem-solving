#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (!head || !head->next || !head->next->next)
            return;

        ListNode *penultimate = head;
        while (penultimate->next->next)
            penultimate = penultimate->next;

        penultimate->next->next = head->next;
        head->next = penultimate->next;

        penultimate->next = NULL;

        reorderList(head->next->next);
    }
};

int main()
{
    ListNode *l1 = new ListNode(2);
    ListNode *l2 = new ListNode(4);
    l1->next = l2;
    ListNode *l3 = new ListNode(8);
    l2->next = l3;
    ListNode *l4 = new ListNode(16);
    l3->next = l4;
    ListNode *l5 = new ListNode(32);
    l4->next = l5;

    return 0;
}