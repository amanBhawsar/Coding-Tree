class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(),stones.end());
        int a,b;
        while(stones.size()>1){
            a=stones.front();
            pop_heap(stones.begin(), stones.end());             stones.pop_back(); 
            b=stones.front();
            pop_heap(stones.begin(), stones.end());             stones.pop_back();
            if(a!=b){
                stones.push_back(abs(a-b));
                push_heap(stones.begin(), stones.end()); 
            }
        }
        return (stones.size()?stones.front():0);
    }
};