class Solution {
public:
    int sunD(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>> umap;
        int k,s=0;
        for(int i=1;i<=n;i++){
            k=sunD(i);
            umap[k].push_back(i);
            if(s<umap[k].size())
                s=umap[k].size();
        }
        int c=0;
        for(auto i:umap){
            if(i.second.size()==s)
                c++;
        }
        return c;
    }
};