var inorderTraversal = function(root) {
    let ans = [];
    let stack = [];
    let curr = root;

    while(curr || stack.length) {
        while(curr) {
            stack.push(curr);
            curr = curr.left;
        }
        curr = stack.pop();
        ans.push(curr.val);
        curr = curr.right;
    }
    return ans;
};