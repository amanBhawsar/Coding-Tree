int workbook(int n, int k, vector<int> arr) {
    int pgno=0,qno=0,ans=0;
    for(int i=0;i<n;i++){
        qno=0;
        while(arr[i]>0){
            pgno++;
            if(pgno<=qno+min(k,arr[i]) && pgno>=qno+1){
                ans++;
                // cout << pgno << " ";
            }
            qno+=k;
            arr[i]-=k;
        }
    }
    return ans;
}