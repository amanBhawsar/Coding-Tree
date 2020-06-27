class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int n=arr.size(),sum=0;
        int f[n];
        int b[n];
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                f[i]=0;
                sum=0;
            }else{
                sum++;
                f[i]=sum;
            }
            // cout << f[i] << " ";
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                b[i]=0;
                sum=0;
            }else{
                sum++;
                b[i]=sum;
            }
            // cout << b[i] << " ";
        }
        int res=0;
        for(int i=1;i<n-1;i++){
            res=max(f[i-1]+b[i+1],res);
        }
        return res;
        
    }
};