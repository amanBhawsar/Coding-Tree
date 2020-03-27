bool ans(struct Node *root, int s, unordered_map<int,int>& umap){
    if(root==NULL)
        return false;
    if(umap[s - root->data]==1)
        return true;
    umap[root->data]=1;
    return ans(root->left,s,umap)||ans(root->right,s,umap);
}

bool isPairPresent(struct Node *root, int target){
    unordered_map<int,int> umap;
    return ans(root,target,umap);
}