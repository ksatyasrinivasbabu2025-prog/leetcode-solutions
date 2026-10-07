/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    int diameter = 0;

public:
    int find_height(TreeNode* current, int& diameter) {
        if (current == NULL)
            return 0;

        int left_height = find_height(current->left, diameter);
        int right_height = find_height(current->right, diameter);

        diameter = max(diameter, left_height + right_height);

        return 1 + max(left_height, right_height);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        find_height(root, diameter);
        return diameter;
    }
};