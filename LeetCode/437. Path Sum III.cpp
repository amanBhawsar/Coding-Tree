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
    int ans;
    void dfs(TreeNode *root,int s,int sum,unordered_map<int,int> preMap){
        if(root==NULL)
            return;
        s+=root->val;
        if(preMap[s-sum])
            ans+=preMap[s-sum];
        preMap[s]++;
        
        dfs(root->left,s,sum,preMap);
        dfs(root->right,s,sum,preMap);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        unordered_map<int,int> preMap;
        preMap[0]=1;
        ans=0;
        dfs(root,0,sum,preMap);
        return ans;
    }
};