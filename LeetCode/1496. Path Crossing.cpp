struct hash_pair {
	template <class T1, class T2>
	size_t operator()(const pair<T1, T2>& p) const
	{
		auto hash1 = hash<T1> {}(p.first);
		auto hash2 = hash<T2> {}(p.second);
		return hash1 ^ hash2;
	}
};
class Solution {
public:
    bool isPathCrossing(string path) {        
        unordered_map<pair<int, int>, bool, hash_pair> umap;
        int n=path.size(),x=0,y=0;
        umap[{x,y}]=1;
        for(int i=0;i<n;i++){
            if(path[i]=='N'){
                y++;
            }else if(path[i]=='S'){
                y--;
            }else if(path[i]=='E'){
                x++;
            }else{
                x--;
            }
            if(umap[{x,y}]==0){
                umap[{x,y}]=1;
            }else{
                return true;
            }
        }
        return false;
    }
};