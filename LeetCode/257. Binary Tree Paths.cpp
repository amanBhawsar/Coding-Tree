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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL)
            return ans;
        stack<pair<TreeNode*,string>> st;
        st.push({root,to_string(root->val)});
        TreeNode* t;
        string s;
        string str;
        while(!st.empty()){
            t=st.top().first;
            s=st.top().second;
            // cout << s << "\n";
            st.pop();
            if(t->right==NULL && t->left==NULL){
                ans.push_back(s);
            }else if(t->right)
                st.push({t->right,s+"->"+to_string(t->right->val)});
            if(t->left)
                st.push({t->left,s+"->"+to_string(t->left->val)});
        }
        return ans;
    }
};