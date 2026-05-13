#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {
        val = 0;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x, TreeNode* left, TreeNode* right) {
        val = x;
        this->left = left;
        this->right = right;
    }
};

class Solution {
public:
    // Recursive Preorder Traversal
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

    // Iterative Inorder Traversal
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            ans.push_back(curr->val);
            curr = curr->right;
        }

        return ans;
    }
};

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    vector<int> preorder = obj.preorderTraversal(root);
    vector<int> inorder = obj.inorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int x : preorder) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Inorder Traversal: ";
    for (int x : inorder) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}