class Solution {
public:
    int hammingDistance(int x, int y) {
        x=x^y;
        y=0;
        while(x){
            y+=x%2;
            x>>=1;
        }
        return y;
    }
};