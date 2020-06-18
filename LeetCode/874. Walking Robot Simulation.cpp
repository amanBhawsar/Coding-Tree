struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},x=0,y=0,d=0,val,ans=0;
        unordered_set<pair<int,int>,hash_pair> uset;
        for(int i=obstacles.size()-1;i>=0;i--){
            uset.insert(make_pair(obstacles[i][0],obstacles[i][1]));
        }
        for(int i=0;i<commands.size();i++){
            if(commands[i]==-1){
                d=(d+1)%4;
            }else if(commands[i]==-2){
                d=(d+3)%4;
            }else{
                val=commands[i];
                while(val--){
                    x+=dx[d];
                    y+=dy[d];
                    if(uset.find(make_pair(x,y))!=uset.end()){
                        x-=dx[d];
                        y-=dy[d];
                        break;
                    }
                    ans = max(ans, x*x + y*y);
                }
            }
        }
        return ans;
    }
};