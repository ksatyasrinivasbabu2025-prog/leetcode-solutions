int minDepth(struct TreeNode* root) {
    if (!root) return 0;
    
    if (!root->left && !root->right) return 1;
    
    if (!root->left) return minDepth(root->right) + 1;
    
    if (!root->right) return minDepth(root->left) + 1;
    
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return (left < right ? left : right) + 1;
}
