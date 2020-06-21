class Solution {
public:
    vector<string> getFolderNames(vector<string>& s) {
        unordered_map<string, int> umap;
        unordered_map<string, int> um;
        int n = s.size(),k=1,j;
        string sk,temp;
        for(int i=0;i<n;i++){
            if(umap[s[i]]==0){
                umap[s[i]]++;
            }else{
                sk=s[i];
                temp=s[i];
                k=um[temp]+1;
                while(umap[sk]!=0){
                    sk=s[i];
                    sk=sk+"(" + to_string(k) +")";
                    k++;
                }
                um[temp]=k-1;
                s[i]=sk;
                umap[sk]++;
            }
        }
        return s;
    }
};