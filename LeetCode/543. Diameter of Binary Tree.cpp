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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int l=height(root->left),r=height(root->right);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int d = height(root->left)+height(root->right);
        return max(d,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};