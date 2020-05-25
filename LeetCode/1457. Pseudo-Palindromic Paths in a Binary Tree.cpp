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

int ans;
int path[100010];
class Solution
{
public:
    int height(TreeNode* root)
    {
       if(root==NULL){
           return 0;
       }
       return 1+max(height(root->right),height(root->left));
    }
	void inorder(TreeNode* root,int d)
	{
		if(root==NULL)
            return;
        path[d]=root->val;
        inorder(root->left,d+1);
        inorder(root->right,d+1);
        if(root->left==NULL && root->right==NULL){
            unordered_map<int,int> umap;
            for(int i=0;i<=d;i++)
                umap[path[i]]++;
            int one = 0;
            for (auto i : umap) {
                if (i.second % 2 == 1)
                    one++;
                if (one == 2)
                    break;
            }
            if (one != 2)
                ans++;
        }
    }
    
	int pseudoPalindromicPaths (TreeNode* root)
	{
        ans=0;
        inorder(root,0);
		return ans;
	}
};