string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0,j=B.size()-1;i<A.size();i++,j--){
        if(A[i]+B[j]>=k){

        }else{
            return "NO";
        }
    }
    return "YES";
}