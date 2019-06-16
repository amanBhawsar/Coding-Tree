#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        vector <long>vect;
        long n,temp;
        cin >> n;
        for(long i=0;i<n;i++){
            cin >> temp;
            vect.push_back(temp);
        }
        sort(vect.begin(),vect.end());
        vect.erase(unique(vect.begin(),vect.end()),vect.end());
        // for(long i=0;i<vect.size();i++){
        //     cout<<vect[i]<<" ";
        // }
        long result;
        if(vect[0]==vect[vect.size()-1]){
            cout<<2*vect[0]<<endl;
            continue;
        }
        long sum=0,diff;
        if(vect.size()>6){
            diff=5;
        }else{
            diff=vect.size();
        }
        
        sum=0;
        for(long j=vect.size()-1;j>vect.size()-diff;j--){
            result=vect[0];
            for(long i=0;i<vect.size();i++){
                if(vect[i]==vect[j]){
                    continue;
                }
                result=__gcd(result,vect[i]);
                if(result==1){
                    break;
                }
            }
            if(sum<result+vect[j]){
                sum=result+vect[j];
            }
        }
        cout << sum << endl;
    }
	return 0;
}