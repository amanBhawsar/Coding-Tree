class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        set<int> s;
        set<int>:: iterator itr;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<=sqrt(nums[i]);j++){
                if(nums[i]%j==0){
                    s.insert(j);
                    s.insert(nums[i]/j);
                }
            }
            if(s.size()==4){
                for (itr = s.begin(); itr != s.end(); itr++){
                    sum+=*itr;
                }
            }
            s.clear();
        }
        return sum;
    }
};