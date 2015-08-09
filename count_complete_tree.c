/**
 * Given a complete binary tree, count the number of nodes.
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countHeight(struct TreeNode* root) {
    int h = 0;
    while(root) { 
        root = root->left;
        h++;
    }
    return h;
}

int countNodes(struct TreeNode* root) {
    
    if(!root) return 0;
    
    int left = countHeight(root->left);
    int right = countHeight(root->right);
    
    if(left == right ) return (1<<left) + countNodes(root->right);
    return (1<<right) + countNodes(root->left);
}