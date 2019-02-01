int i=0;
int count =0;
int m=0,n=0;
int ab[300]={0};
char arr[300][300];
char po[600];
char post[300];
char a[300];
void push(char k){
    count++;
    post[i]=k;
    i++;
}
char pop(){
    char p=post[i-1];
    i--;
    count--;
    return p;
}
int isempty(){
    if(count==0){
        return 1; //printf("Stack is empty bro\n");
    }else{
        return 0;
    }
}
char top(){
    char p=post[i-1];
    return p;
}
int precedence(char op){
    if(op=='^'){
        return 3;
    }
    else if(op=='*' || op =='/' || op =='%'){
        return 2;
    }
    else {
        return 1;
    }
}
void palin(char* input)
{
    int j=0,operat=0,polen;
    int len = strlen(input);
    int q=0;
    for(int i=0;i<len;i++){
        if(input[i]=='*' || input[i]=='/' || input[i]=='+' || input[i]=='-' || input[i]=='^' || input[i]=='%'){
            operat++;
            if(precedence(top())<precedence(input[i])){
                push(input[i]);
            }
            else{
            while(!isempty()){
                a[j]=pop();
                j++;
                if(precedence(top())<precedence(input[i])){
                    break;
                }
            }
            push(input[i]);
            }
        }
        else{
            a[j]=input[i];
            j++;
        }
    }
    while(!isempty()){
        a[j]=pop();
        j++;
    }
    // for(int i=0;i<len;i++){
    // printf("%c ",a[i]); //postfix is correct
    // }
    int l1;
    for(int i=0;i<len;i++){
        polen=0;
        if(a[i]=='*' || a[i]=='/' || a[i]=='+' || a[i]=='-' || a[i]=='^' || a[i]=='%'){
            l1=0;
            po[polen++]=')';
            l1++;
            for(int lo=0;lo<ab[m-1];lo++){
                l1++;
                po[polen++]=arr[q-1][lo];
            }
            q--;
            m--;
            po[polen++]=a[i];
            l1++;
            for(int lo=0;lo<ab[m-1];lo++){
                po[polen++]=arr[q-1][lo];
                l1++;
            }
            q--;
            m--;
            po[polen++]='(';
            l1++;
            ab[m]=l1;
            m++;
            for(int lo=0;lo<polen;lo++){
                arr[q][lo] = po[lo];
            }
            q++;
        }
        else{
            ab[m]=1;
            arr[q][0]=a[i];
            m++;
            q++;
        }
    }
    for(int lo=ab[m-1]-1;lo>=0;lo--){
        printf("%c",arr[q-1][lo]);
    }
}
/*
Write a function void palin(char* input) to print appropriate "(" and ")" brackets for the given
expressions . use printf function to display the final expression inside the palin(char* input)
function.
For e.g.
Input:
A+B/C-D
Output:
((A+(B/C))-D)
Note:
1. NO NEED to write main function.
2. You need to define your own stack, and its push and pop functions.
3. You can assume maximum length of input is 201.
For example:
Input               Result
A-B*D^E^F+G%H^J/K   ((A-(B*((D^E)^F)))+((G%(H^J))/K))
A+B*C-D             ((A+(B*C))-D)
*/
