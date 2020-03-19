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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        stack<pair<TreeNode*,int>> st;
        st.push({root,root->val});
        TreeNode* t;
        int s,f;
        while(!st.empty()){
            t=st.top().first;
            s=st.top().second;
            st.pop();
            f=0;
            if(t->right){
                st.push({t->right,s+t->right->val});    
                f++;
            }
            if(t->left){
                st.push({t->left,s+t->left->val});    
                f++;
            }
            if(f==0 && sum==s)
                return true;  
        }
        return false;
    }
};