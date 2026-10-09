class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (is(root) == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    int is(TreeNode* root) {
        if (root == nullptr) return 0;  // stop if null

        int a = 0;
        int b = 0;

        // ✅ SAFE and logically correct check
        if (((root->left == nullptr) || (root->left->val == root->val)) &&
            ((root->right == nullptr) || (root->right->val == root->val))) {
            a++;
        } else {
            b++;
        }

        // ✅ recurse safely and accumulate mismatches
        if (root->left) b += is(root->left);
        if (root->right) b += is(root->right);

        return b;
    }
};