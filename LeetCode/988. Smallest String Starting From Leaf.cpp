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
    string smallestFromLeaf(TreeNode* root) {
        if(root==NULL)
            return "";
        stack<pair<TreeNode*,string>> st;
        st.push({root,string(1, 'a' + root->val)});
        TreeNode* t;
        string s,ans=string(1, 'z'+1);
        string str;
        while(!st.empty()){
            t=st.top().first;
            s=st.top().second;
            // cout << s << "\n";
            st.pop();
            if(t->right==NULL && t->left==NULL){
                reverse(s.begin(),s.end());
                if(s<ans)
                    ans=s;
            }else if(t->right)
                st.push({t->right,s+string(1, 'a'+t->right->val)});
            if(t->left)
                st.push({t->left,s+string(1, 'a'+t->left->val)});
        }
        return ans;
    }
};