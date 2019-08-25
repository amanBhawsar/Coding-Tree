void push(int a)
{
     s.push(a);
}
bool isFull(int n)
{
     return (s.size()==n);
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
    int k = s.top();
    s.pop();
    return k;
}
int getMin()
{
   stack <int> cpy;
   cpy = s;
   int min = 99999;
   while(!cpy.empty()){
       if(cpy.top()<min){
           min=cpy.top();
       }
       cpy.pop();
   }
   return min;
}