vector<int> largestPermutation(int k, vector<int> arr) {
    int i=0;
    int n=arr.size();
    int index[n+1];
    if(k>=arr.size()){
        for(int i=0;i<n;i++){
            arr[i]=n-i;
        }
        return arr;
    }
    for(int i=0;i<n;i++){
        index[arr[i]]=i;
    }
    while(1){
        int maxi=0,ind=0,f=0;
        if(n==arr[i]){
            i++;
            n--;
            continue;
        }
        if(i>=arr.size()){
            break;
        }
        index[arr[i]]=index[n];
        swap(arr[i],arr[index[n]]);
        index[n]=i;
        k--;
        n--;
        i++;
        if(k==0){
            break;
        }    
    }
    return arr;
}