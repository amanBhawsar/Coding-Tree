class Solution {
public:
    int countElements(vector<int>& arr) {
        int h[1001]={0};
        for(int i=arr.size()-1;i>=0;i--){
            h[arr[i]]++;
        }
        int ans=0;
        for(int i=0;i<1000;i++){
            if(h[i+1]>0)
                ans+=h[i];
        }
        return ans;
    }
};