int toys(vector<int> w) {
    sort(w.begin(),w.end());
    int ans=1,z=w[0];
    for(int i=0;i<w.size();i++){
        if(w[i]<=z+4){
            continue;
        }else{
            z=w[i];
            ans++;
        }
    }
    return ans;
}