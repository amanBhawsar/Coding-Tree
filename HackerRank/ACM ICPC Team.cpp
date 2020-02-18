int legendScore(string a,string b){
    int c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1' || b[i]=='1'){
            c++;
        }
    }
    return c;
}

vector<int> acmTeam(vector<string> topic) {
    int size = topic.size();
    int maxi=0,maxiCount=1,k=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            k = legendScore(topic[i],topic[j]);
            if(k==maxi)
                maxiCount++;
            if(k>maxi){
                maxi=k;
                maxiCount=1;
            }
        }
    }
    vector<int> ans;
    ans.push_back(maxi);
    ans.push_back(maxiCount);
    return ans;
}