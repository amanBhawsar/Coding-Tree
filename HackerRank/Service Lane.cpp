vector<int> serviceLane(int n, vector<vector<int>> cases,vector<int> width) {
    vector <int> ans;
    for(int i=0;i<cases.size();i++){
        int l=cases[i][0],r=cases[i][1];
        int mini = INT_MAX;
        for(int j=l;j<=r;j++){
            mini = min(mini,width[j]);
        }
        ans.push_back(mini);
    }
    return ans;
}