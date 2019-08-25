/*This is a function problem.You only need to complete the function given below*/
//Complete this function
//The array is declared globally
void sortByFreq(int arr[],int n)
{
    int hash[62]={0};
    int sorted[62]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
        sorted[arr[i]]++;
    }
    sort(sorted,sorted+61);
    for(int j=60;j>=0;j--){
        for(int i=1;i<61;i++){
            if(hash[i]==sorted[j]){
                for(int k=1;k<=hash[i];k++){
                    cout<<i<<" ";
                }
                hash[i]=0;
            }
        }
    }
        
}