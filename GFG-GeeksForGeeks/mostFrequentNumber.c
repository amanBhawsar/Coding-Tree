int mostFrequentNumber(NODE* head)
{
    int mostFrequentNum= head->data;
    int c=1,m =1;
    NODE* a = head;
    NODE* b= head->next;
    while(a != NULL){
        c =1;
        b= a->next;
        while(b != NULL){
            if(a->data == b->data){
                c++;
            }
            b= b->next;
        }
        if(m < c){
            m =c;
            mostFrequentNum = a->data;
        }
        else if(m== c){
            if(mostFrequentNum < a->data)
                mostFrequentNum = a->data;
        }
        a =a->next;
    }
    return mostFrequentNum;
}
/*
The structure of NODE is given below.
struct linked_list
{
int data;
struct linked_list *next ;
} ;
typedef struct linked_list NODE ;
Don't used any scanf and printf functions.
Note: If there are two numbers N and M that are most frequent, then return max(M,N).
Constraints
Numbers in the linked list vary from -10000 to 10000.
*/
