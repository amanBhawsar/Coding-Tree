struct Node *reverse(struct Node *head){
    if(head ==NULL){
        return NULL;
    }
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct Node *kAltReverse(struct Node *head, int k) {
    if(head ==NULL){
        return NULL;
    }
    int c;
    struct Node *cr = head;
    struct Node *aman;
    struct Node *ab = head;
    struct Node *new;
    c=1;
    while(cr->next){
        cr = cr->next;
        c++;
    }
    cr = head;
    if(c>=k){
        for(int i=1;i<k;i++){
            cr=cr->next;
            ab=ab->next;
        }
        cr=cr->next;
        ab->next = NULL;
        head = reverse(head);
        new=head;
        for(int i=1;i<k;i++){
            head = head->next;
        }
        head->next = cr;
        c=c-k;
        if(c>=k){
            for(int i=1;i<k;i++){
                cr=cr->next;
            }
        }
        else{
            return new;
        }
            c=c-k;
    }
    else{
        return head;
    }
    aman = cr;
    aman->next = kAltReverse(cr->next, k);
    return new;
}
/*
Define a function struct Node *kAltReverse(struct Node *head, int k) such that it reverse
alternate K nodes in a Singly Linked List,
Node is defined as:
struct Node
{
int data;
struct Node* next;
};
Program takes Two inputs:
-First to defined the elements in the linked list
-Second is the kth location
Program prints Two outputs:
-First the linked list created
-Second the reserved list after every kth node
Example:
Enter the number of elements in linked list : 10
10 9 8 7 6 5 4 3 2 1 0 // A linked list is generated,which contains elements from 10 to 0
Enter the k node location : 2
9 10 8 7 5 6 4 3 1 2 0 // Value of K specify elements to be reversed and also elements to be skipped
For example:
Input Result
83
8 7 6 5 4 3 2 1 0
6 7 8 5 4 3 0 1 2
6
2
6 5 4 3 2 1 0
5 6 4 3 1 2 0
*/
