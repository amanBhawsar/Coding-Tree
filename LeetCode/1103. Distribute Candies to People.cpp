class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int i=-1,curr=1;
        while(candies>0){
            i=(i+1)%num_people;
            if(curr<=candies)
                ans[i]+=curr++;
            else
                ans[i]+=candies;
            candies-=curr-1;
        }
        return ans;
    }
};