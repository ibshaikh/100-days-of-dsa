struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode* fast = sentinel;
        ListNode* slow = sentinel;

        // Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches end
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete target node
        ListNode* toDelete = slow->next;
        slow->next = toDelete->next;
        delete toDelete;

        ListNode* newHead = sentinel->next;
        delete sentinel;

        return newHead;
    }
};