class Solution {
public:
    void traversal(TreeNode* curr, vector<int>& ans) {
        if (!curr) return;

        ans.push_back(curr->val);
        traversal(curr->left, ans);
        traversal(curr->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, ans);
        return ans;
    }
};