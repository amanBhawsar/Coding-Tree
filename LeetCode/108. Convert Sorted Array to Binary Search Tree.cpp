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
    TreeNode* sortedToBST(vector<int> v,int l,int r){
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        TreeNode* root=new TreeNode(v[m]);
        root->left=sortedToBST(v,l,m-1);
        root->right=sortedToBST(v,m+1,r);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedToBST(nums,0,nums.size()-1);
    }
};