class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0){
            return 1;
        }
        int d = log(num)/log(2);
        d++;
        long p=1;
        while(d--){
            p*=2;
        }
        return (p-1)^num;
    }
};