#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode* current = sentinel;

        while (current->next) {
            if (current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // free memory
            } else {
                current = current->next;
            }
        }

        ListNode* newHead = sentinel->next;
        delete sentinel; // clean up dummy node
        return newHead;
    }
};