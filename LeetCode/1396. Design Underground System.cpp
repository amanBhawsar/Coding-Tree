class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> umap;
    vector<pair<pair<string,int>,pair<string,int>>> mmap;
    vector<pair<int,int>> avg;
    UndergroundSystem() {

    }
    
    void checkIn(int id, string stationName, int t) {
        umap[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        // umap[id]={stationName,t};
        avg.push_back({umap[id].second,t});
        mmap.push_back({umap[id],{stationName,t}});
        umap.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double val=0.0,sum=0.0;
        int c=0;
        for(int i=0;i<mmap.size();i++){
            if(mmap[i].first.first==startStation && mmap[i].second.first==endStation){
                sum+=(mmap[i].second.second - mmap[i].first.second);
                c++;
            }
                
        }
        return (sum/(double)c);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */