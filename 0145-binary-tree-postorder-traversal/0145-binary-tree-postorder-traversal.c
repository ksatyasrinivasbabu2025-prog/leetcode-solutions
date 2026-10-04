/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void postOrder(struct TreeNode* root, int* arr, int* returnSize) {
    if (root) {
        postOrder(root->left, arr, returnSize);
        postOrder(root->right, arr, returnSize);
        arr[(*returnSize)++] = root->val;
    }
    return;
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    postOrder(root, arr, returnSize);
    return arr;
    free(arr);
}