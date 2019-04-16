#include <algorithm> // binary search
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
        long count = 0;
        vector<pair<long, long> > v;
        long n,m,k,a,b;
        cin >> n >> m >> k;
        long h = 0;
        while(k--){
            cin >> a >> b;
            if(binary_search(v.begin(),v.end(),make_pair(a,b))){

            }else{
        		v.push_back(make_pair(a,b));
        		h++;
            }
        }
        sort(v.begin(), v.end());
        //count for each pair
        for(long i=0;i<h;i++){
            long c=0;
            a = v[i].first;
            b = v[i].second;
            //now 4 conditions
            auto temp = make_pair(a-1,b);
            if(binary_search(v.begin(),v.end(),temp)){
                c++;
                //cout << temp.first << " " << temp.second << endl;
            }
            temp = make_pair(a+1,b);
            if(binary_search(v.begin(),v.end(),temp)){
                c++;
                //cout << temp.first << " " << temp.second << endl;
            }
            temp = make_pair(a,b+1);
            if(binary_search(v.begin(),v.end(),temp)){
                c++;
                //cout << temp.first << " " << temp.second << endl;
            }
            temp = make_pair(a,b-1);
            if(binary_search(v.begin(),v.end(),temp)){
                c++;
                //cout << temp.first << " " << temp.second << endl;
            }
            count+=4-c;
        }
		cout << count << endl;
	}
	return 0;
}
