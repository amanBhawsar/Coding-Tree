/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
int area(Rectangle r)
{
   return (r.length)*(r.breadth);
}
void maxArea(Rectangle arr[],int n)
{
    int max=-1;
    for(int i=0;i<n;i++){
        int temp = area(arr[i]);
        if(max < temp){
            max= temp;
        }
    }
    cout<<max<<endl;
}
