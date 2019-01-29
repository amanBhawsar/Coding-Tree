int sumOfLeafNodes(Node *r ){
     if(r==NULL){
         return 0;
     }
     if(!r->left&&!r->right){
         return r->data;
     }
     return sumOfLeafNodes(r->left) + sumOfLeafNodes(r->right);
}
