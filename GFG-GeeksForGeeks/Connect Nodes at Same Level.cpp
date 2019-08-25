void connect(Node *p)
{
   if(p==NULL){
       return;
   }
   queue <Node*>q;
   q.push(p);
   
   while(!q.empty()){
       int s = q.size();
       Node* prev = NULL;
       while(s--){
            Node *curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            if(prev!=NULL){
                prev->nextRight=curr;
            }
            prev=curr;
       }
       prev->nextRight=NULL;
   }
}
