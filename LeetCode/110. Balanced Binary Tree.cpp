/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ld = maxDepth(root->left);
        int rd = maxDepth(root->right);
        return 1+max(ld,rd);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(abs(maxDepth(root->left)-maxDepth(root->right))<=1)
            return isBalanced(root->left)&&isBalanced(root->right);
        return false;
    }
};