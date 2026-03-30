#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        while (head) {
            vals.push_back(head->val);
            head = head->next;
        }
        int left = 0, right = vals.size() - 1;
        while (left < right) {
            if (vals[left++] != vals[right--]) return false;
        }
        return true;
    }
};