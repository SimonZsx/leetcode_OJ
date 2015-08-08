/**
 * Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
bool isS(struct TreeNode *a, struct TreeNode *b){
    if(a==NULL&b==NULL) return true;
    return (a && b && a->val==b->val && isS(a->left, b->right) && isS(a->right, b->left) );
}
bool isSymmetric(struct TreeNode* root) {
    return (root == NULL || isS(root->left,root->right) );
}