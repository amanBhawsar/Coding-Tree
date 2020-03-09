class Solution {
public:
    int findComplement(int num) {
        int d = log(num)/log(2);
        d++;
        long p=1;
        while(d--){
            p*=2;
        }
        return (p-1)^num;
    }
};