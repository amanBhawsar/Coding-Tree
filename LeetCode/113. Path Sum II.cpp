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
    void dfs(TreeNode *root,vector<vector<int>>& ans,vector<int> path,int s,int sum){
        if(root==NULL)
            return;
        s+=root->val;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(s==sum)
                ans.push_back(path);
            return;
        }
        dfs(root->left,ans,path,s,sum);
        dfs(root->right,ans,path,s,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        vector<int> path;
        
        dfs(root,ans,path,0,sum);
        return ans;
    }
};