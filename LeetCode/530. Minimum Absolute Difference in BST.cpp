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
    int prev = -1,mini=INT_MAX;
    void inorder(TreeNode* root) {
        if(root){
            inorder(root->left);
            if(prev!=-1)
                mini=min(mini,abs(prev - root->val));
            prev=root->val;
            inorder(root->right);            
        }   
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return mini;
    }
};