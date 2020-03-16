class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int n,r;
        vector<int>ans;
        bool isSD;
        for(int i=left;i<=right;i++){
            n=i;
            isSD=true;
            while(n){
                r=n%10;
                if(r==0 || i%r!=0)
                    isSD=false;
                n/=10;
            }
            if(isSD)
                ans.push_back(i);
        }
        return ans;
    }
};