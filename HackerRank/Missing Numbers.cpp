vector<int> missingNumbers(vector<int> v1, vector<int> v2) {
    vector<int> diff;
    int h[100000]={0};
    for(int i=0;i<v2.size();i++){
        h[v2[i]]++;
    }
    for(int i=0;i<v1.size();i++){
        h[v1[i]]--;
    }
    for(int i=0;i<10002;i++){
        if(h[i]!=0){
            diff.push_back(i);
        }
    }
    return diff;
}