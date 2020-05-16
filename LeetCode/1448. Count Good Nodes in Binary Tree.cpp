/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int good(TreeNode* root, int data) {
        if(root==NULL){
            return 0;
        }
        if(root->val >= data){
            return 1+good(root->left,root->val)+good(root->right,root->val);
        }else{
            return good(root->left,data)+good(root->right,data);
        }
        return 0;
    }
    
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return 1+good(root->left,root->val)+good(root->right,root->val);
    }
};