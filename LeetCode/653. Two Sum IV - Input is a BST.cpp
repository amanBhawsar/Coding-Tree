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
    bool ans;
    void inorder(TreeNode* root, int k,unordered_map<int,int>& umap){
        if(root==NULL)
            return;
        if(umap.find(k - root->val)!=umap.end())
            ans=true;
        umap[root->val]++;
        inorder(root->left,k,umap);
        inorder(root->right,k,umap);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> umap;
        ans=false;
        inorder(root,k,umap);
        return ans;
    }
};