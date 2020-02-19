vector<int> jimOrders(vector<vector<int>> orders) {
    vector<int> total;
    vector<int> ans;
    vector<int> totalSort;
    for(int i=0;i<orders.size();i++){
        total.push_back(orders[i][0]+orders[i][1]);
        totalSort.push_back(orders[i][0]+orders[i][1]);
    }
    sort(totalSort.begin(),totalSort.end());
    for(int i=0;i<totalSort.size();i++){
        for(int j=0;j<total.size();j++){
            if(totalSort[i]==total[j]){
                total[j]=0;
                ans.push_back(j+1);
                break;
            }
        }
    }
    return ans;
}