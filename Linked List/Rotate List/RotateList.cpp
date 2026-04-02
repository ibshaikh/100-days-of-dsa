struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        k = k % length;
        if (k == 0) return head;

        int steps = length - k;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (steps--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = nullptr;
        tail->next = head;
        return curr;
    }
};