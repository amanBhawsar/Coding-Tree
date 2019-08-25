/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node {
    int data;
    Node* next;
}; */
#include <stdlib.h>
Node* SortedMerge(Node* h1,   Node* h2)
{
    if(!h1)
        return h2;
    if(!h2)
        return h1;
    if(h1&&h2){
        if(h1->data >= h2->data){
            h2->next = SortedMerge(h1,h2->next);
            return h2;
        }
        else{
            h1->next = SortedMerge(h1->next,h2);
            return h1;
        }
    }
}
