class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int i=1,j=1,n=arr.size(),sum=0,mini=100000000,Startindi=-1;
        vector<int> pre(n+1,0);
        pre[0]=0;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+arr[i];
        }
        vector<pair<int,int>> vp;
        pair<int,int> stInd;
        while(j<=n && i<=n){
            if(pre[j]-pre[i-1]==target){
                vp.push_back({i,j});
                mini=min(mini,j-i+1);
                if(mini==j-i+1)
                    stInd = {i,j};
                i++;j++;
            }else if(pre[j]-pre[i-1]<target){
                j++;
            }else{
                i++;
            }
        }
        if(vp.size()==0){
            return -1;
        }
        // cout << stInd.first <<" " << stInd.second << "\n";
        int c=100000000;
        for(int i=0;i<vp.size();i++){
            // cout << vp[i].first <<  " " << vp[i].second << "\n";
            if((stInd.first <= vp[i].first &&  stInd.second >= vp[i].first)||(stInd.first <= vp[i].second &&  stInd.second >= vp[i].second)){
                
            }else{
                c=min(c,vp[i].second-vp[i].first+1);
                // cout << vp[i].first <<  " " << vp[i].second << "\n";
            }
        }
        if(c==100000000){
            return -1;
        }    
        // cout << mini << " " << c  << "\n";
        return mini+c;
    }
};