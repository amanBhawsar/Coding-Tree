class Solution {
public:
    struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
        } 
    }; 
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        unordered_map<pair<string,string> ,int, hash_pair> umap;
        set<string> tables;
        set<int> tabno;
        int n=orders.size();
        for(int i=0;i<n;i++){
            tables.insert(orders[i][2]);
            pair<string, string> p=make_pair(orders[i][1],orders[i][2]); 
            umap[p]++;
            tabno.insert(stoi(orders[i][1]));
        }
        vector<string> table;
        for(auto i:tables){
            table.push_back(i);
        }
        sort(table.begin(),table.end());
        table.insert(table.begin(), "Table");
        vector<vector<string>> ans;
        ans.push_back(table);
            for(auto val: tabno){
                // cout << val << " ";
                vector<string> temp;
                temp.push_back(to_string(val));
                
                for(int k=1;k<table.size();k++){
                    pair<string, string> p=make_pair(to_string(val),table[k]);
                    temp.push_back(to_string(umap[p]));
                }
                ans.push_back(temp);
            }
        return ans;
    }
};