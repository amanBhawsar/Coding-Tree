string encryption(string s) {   
    string ans="";
    int n = ceil(sqrt(s.size()));
    int m = n-1;
    
    for(int i=0;i<=m;i++){
        for(int j=i;j<s.size();j+=n){
            ans+=s[j];
        }
        ans+=" ";
    }    
    return ans;
}