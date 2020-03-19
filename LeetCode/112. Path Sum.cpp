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
    int s=0;
    bool hasSum(TreeNode* root, int n){
        if(root==NULL)
            return false;
        n+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(n==s){
                return true;
            }
            return false;
        }
        return hasSum(root->left,n)||hasSum(root->right,n);;
        
    }
    
    
    bool hasPathSum(TreeNode* root, int sum) {
        s=sum;
        return hasSum(root,0);
    }
};