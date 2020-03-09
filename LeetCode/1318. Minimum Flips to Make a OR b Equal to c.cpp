class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a || b || c){
            if((a|b)%2 == c%2){
                a/=2;b/=2;c/=2;
            }else{
                if((c%2)==1){
                    ans++;
                }else{
                    ans+=(((a%2)&&(b%2))?2:1);
                }
                a/=2;b/=2;c/=2;
            }
        }
        return ans;
    }
};