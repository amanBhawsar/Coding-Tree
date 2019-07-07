int getCountOfNode(Node *root, int l, int h){
    if(root){
        int count=0;
        count += getCountOfNode(root->left,l,h);
        if(root->data >=l && root->data<=h){
            count++;
        }
        count += getCountOfNode(root->right,l,h);
        return count;
    }
}