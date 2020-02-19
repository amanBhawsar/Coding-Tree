vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> ans;
    vector<int> arrc;
    int g[10001]={0};
    for(int i=0;i<arr.size();i++){
        g[arr[i]]++;
        arrc.push_back(arr[i]);
    }
    sort(arrc.begin(),arrc.end());
    int i=0,j=arr.size()-1;
    
    int a=0,b=0;
    for(int i=0;i<arrc.size();i++){
        g[arrc[i]]--;
        if(g[m-arrc[i]]){
            a=arrc[i];
            b=m-arrc[i];
            break;
        }
        g[arrc[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(a==arr[i]){
            arr[i]=0;
            ans.push_back(i+1);
        }
        if(b==arr[i]){
            arr[i]=0;
            ans.push_back(i+1);
        }
        if(ans.size()==2){
            break;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}