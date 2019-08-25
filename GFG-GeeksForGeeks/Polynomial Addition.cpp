/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure of Node used
struct Node
{
    int coeff;  // coefficient of the polynomial
    int pow;   // power of the polynomial
    Node* next;
};
*/
/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */
void addPolynomial(Node *p1, Node *p2)
{
    if(p1==NULL&&p2==NULL){
        return;
    }
    if(p1==NULL){
        while(p2){
            cout << p2->coeff << "x^" << p2->pow;
            if(p2->next!=NULL)
                cout << " + ";
            p2=p2->next;
        }
        return;
    }
    if(p2==NULL){
        while(p1){
            cout << p1->coeff << "x^" << p1->pow;
            if(p1->next!=NULL)
                cout << " + ";
            p1=p1->next;
        }
        return;
    }
    if(p1->pow==p2->pow){
        cout << p1->coeff+p2->coeff << "x^" << p1->pow;
        if(p1->next!=NULL||p2->next!=NULL)
                cout << " + ";
        addPolynomial(p1->next,p2->next);
    }
    else if(p1->pow>p2->pow){
        cout << p1->coeff << "x^" << p1->pow;
        if(p1!=NULL||p2!=NULL)
                cout << " + ";
        addPolynomial(p1->next,p2);
    }
    else{
        cout << p2->coeff << "x^" << p2->pow;
        if((p1!=NULL)||(p2!=NULL))
                cout << " + ";
        addPolynomial(p1,p2->next);
    }
}
