/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Reverse a linked list
  The input list will have at least one element
  Return pointer to head of reverse linked list
  Node is defined as
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k){
    struct node* current = head;
    struct node* next = NULL;
    struct node* prev = NULL;
    int count = 0;
    while (current != NULL && count < k){
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next !=  NULL)
       head->next = reverse(next, k);
    return prev;
}
