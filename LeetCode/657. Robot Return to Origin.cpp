class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,l=0,n=moves.size();
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                u++;
            }else if(moves[i]=='D'){
                u--;
            }else if(moves[i]=='L'){
                l++;
            }else if(moves[i]=='R'){
                l--;
            }
        }
        return (u==0 && l==0);
    }
};