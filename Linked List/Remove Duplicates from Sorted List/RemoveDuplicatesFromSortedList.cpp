struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;  // edge case

        ListNode* curr = head;

        while (curr->next) {
            if (curr->val == curr->next->val) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;  // free memory
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};