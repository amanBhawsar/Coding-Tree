int pairs(int k, vector<int> arr) {
    int c=0,i=0,j=1,n=arr.size();
    sort(arr.begin(),arr.end());
    while(j<n){
        if(arr[j]-arr[i]==k){
            j++;
            c++;
        }else if(arr[j]-arr[i]<k){
            j++;
        }else{
            i++;
        }
    }
    return c;
}