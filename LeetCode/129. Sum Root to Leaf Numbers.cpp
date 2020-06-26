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
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        stack<pair<TreeNode*,int>> st;
        st.push({root,root->val});
        TreeNode* t;
        int s,sum=0;
        string str;
        while(!st.empty()){
            t=st.top().first;
            s=st.top().second;
            st.pop();
            if(t->right==NULL && t->left==NULL)
                sum+=s;
            else if(t->right)
                st.push({t->right,10*s+t->right->val});
            if(t->left)
                st.push({t->left,10*s+t->left->val});
        }
        return sum;
    }
};