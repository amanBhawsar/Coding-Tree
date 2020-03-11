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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);        
        int f=0;
        TreeNode* node;
        while(!q.empty()){
            if(f==1){
                q.push(NULL);
                f=0;
            }
            
            if(q.front()==NULL){
                f=1;
                ans.push_back(level);
                level.clear();
                q.pop();
            }else{
                node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=NULL)
                    q.push(node->left); 
                if(node->right!=NULL)
                    q.push(node->right); 
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};