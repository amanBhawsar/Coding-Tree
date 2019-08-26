// Complete the stones function below.
vector<int> stones(int n, int a, int b) {
        vector <int> v;
        int arr[n],i,j;
        for(i=0;i<=n-1;i++){
            arr[i]=a*i + b*(n-1-i);
        }
        if(a==b){
            arr[0]=(n-1)*a;
            v.push_back(arr[0]);
        }
        else if(a<b){
            for(i=n-1;i>=0;i--){
                v.push_back(arr[i]);
            }
        }
        else{
            for(i=0;i<=n-1;i++){
                v.push_back(arr[i]);
            }
        }
        return v;
}
