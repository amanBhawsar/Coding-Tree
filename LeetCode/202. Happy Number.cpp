class Solution {
public:
    long int digSq(long int n){
        long int ans=0;
        while(n){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        umap[n]++;
        while(n!=1){
            n=digSq(n);
            if(umap[n]==1){
                return false;   
            }
            umap[n]=1;
        }
        return true;
    }
};