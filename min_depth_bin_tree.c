/**
 * Given a binary tree, find its minimum depth.
 * The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    
    if(!root) return 0;
    
    if(!root->left && !root->right) return 1;
    
    int left = minDepth(root->left);
    
    int right = minDepth(root->right);
    
    if(!left) return 1+right;
    
    if(!right) return 1+left;
    
    return (left<right?1+left:1+right);
    
}