class Solution {
public:
    int getpower(int n){
        int c=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }else{
                n=3*n+1;
            }
            c++;
        }
        return c;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++){
            v.push_back({getpower(i),i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};