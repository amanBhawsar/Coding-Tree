#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

int main() {
	FASTIO
	int t;
	cin >> t;
	for(int z=0;z<t;z++){
	    vector<int> ar;
	    vector<int> ex;
	    int n,a,b;
	    cin >> n;
	    vector<pair<int,int>> vec;
	    vector<pair<int,int>> bug;
	    unordered_map<pair<int,int>,int,hash_pair> umap;
	    for(int i=0;i<n;i++){
	        cin >> a >> b;
	        pair<int,int> p(a,b);
	        umap[p]=i;
	        vec.push_back(p);
	        bug.push_back(p);
	        ar.push_back(a);
	        ex.push_back(b);
	    }
	    sort(ar.begin(),ar.end());
	    sort(ex.begin(),ex.end());
	    int class_in=1,max_in=1,i=1,j=0;
	    while(i<n && j<n){
	        if(ar[i]<ex[j]){
	            class_in++;
	            max_in=max(max_in,class_in);
	            i++;
	        }else{
	            class_in--;
	            j++;
	        }
	    }
	    if(max_in>2){
	        cout << "Case #"<<z+1<<": IMPOSSIBLE" << "\n";
	    }else{
	        string ord,ans;
	        sort(vec.begin(),vec.end());
	        ord+="C";
	        for(int i=1;i<n;i++){
	            if(vec[i].first < vec[i-1].second){
	                if(ord.back()=='C'){
	                    ord+="J";
	                }else{
	                    ord+="C";
	                }
	            }else{
	                ord+=ord.back();
	            } 
	        }
	        ans+=string(n,'1');
	        for(int i=0;i<n;i++){
	            ans[umap[vec[i]]]=ord[i];
	        }
	        for(int i=0;i<n;i++){
	            if(ans[i]=='1'){
	            	for(int j=i+1;j<n;j++){
	            		if(bug[i]==bug[j]){
	            			if(ans[j]=='C'){
			                    ans[i]='J';
			                }else{
			                    ans[i]='C';
			                }		
	            			break;	
	            		}
	            	}
	            }
	        }
	        cout << "Case #"<<z+1<<": "<< ans << "\n";
	    }
	}
	return 0;
}