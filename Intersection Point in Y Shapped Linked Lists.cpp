/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0,c;
    Node* h1 = head1;
    Node* h2 = head2;
    while(head1){
        head1=head1->next;
        c1++;
    }
    while(head2){
        head2=head2->next;
        c2++;
    }
    if(c1>c2){
        c=c1-c2;
        c1=0;
        while(h1&&c1!=c){
            h1=h1->next;
            c1++;
        }
    }
    else if(c2>c1){
        c=c2-c1;
        c2=0;
        while(h2&&c2!=c){
            h2=h2->next;
            c2++;
        }
    }
    while(h1){
        if(h1==h2){
            return h1->data;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return -1;
}
