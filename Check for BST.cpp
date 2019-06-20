bool addonBST(Node *root, int min, int max){
    if(root==NULL){
        return true;
    }
    if((root->data < min)||(root->data > max)){
        return false;
    }
    return addonBST(root->left,min,root->data-1)&&addonBST(root->right,root->data+1,max);
}


bool isBST(Node* root) {
    return addonBST(root,INT_MIN,INT_MAX);
}
