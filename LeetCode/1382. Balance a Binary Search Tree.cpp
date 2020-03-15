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
    vector<int> v;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* sortedToBST(int l,int r){
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        TreeNode* root=new TreeNode(v[m]);
        root->left=sortedToBST(l,m-1);
        root->right=sortedToBST(m+1,r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        v.clear();
        inorder(root);
        if(v.size()<=2)
            return root;
        int l=0,r=v.size()-1;
        return sortedToBST(l,r);
    }
};