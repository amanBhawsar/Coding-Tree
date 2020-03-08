class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(n==0){
            digits.push_back(1);
            return digits;
        }
        int done=0;
        while(n!=0){
            if(digits[n-1]==9){
                digits[n-1]=0;
            }else{
                digits[n-1]+=1;
                done=1;
                break;
            }
            n--;
        }
        if(done==0){
            digits.insert(digits.begin(), 1); 
        }
        return digits;
    }
};