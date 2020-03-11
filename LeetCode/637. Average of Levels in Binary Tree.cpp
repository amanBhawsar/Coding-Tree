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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
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
                double sum=0;
                for(int i=0;i<level.size();i++){
                    sum+=level[i];
                }
                ans.push_back(sum/level.size());
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
        return ans;
    }
};