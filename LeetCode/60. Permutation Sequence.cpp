class Solution {
public:
    string getPermutation(int n, int k) {
        if(k==0||n==0)
            return "";
        string s;
        for(int i=1;i<=n;i++)
            s += to_string(i);
        while(next_permutation(s.begin(),s.end())){
            k--;
            if(k==1){
                break;
            }
        }
        return s;
    }
};