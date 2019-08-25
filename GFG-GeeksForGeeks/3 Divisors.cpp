#include<bits/stdc++.h>
using namespace std;
#define ulld unsigned long long int
int main()
{
    int t;
	cin>>t;
	vector<ulld> tests;
	ulld temp,n,pc=0;
	for(ulld i=0;i<t;i++){
	    cin >> temp;
	    tests.push_back(temp);
	}
    n = *max_element(tests.begin(),tests.end());
    vector<int> primes(sqrt(n)+1,true);
    
    for(ulld i=2;i<=sqrt(n);i++){
        if(primes[i]){
            for(ulld j=i*i;j<=sqrt(n);j=j+i){
                primes[j]=false;
            }
        }
    }
    
    vector<ulld> dummy = tests;
    sort(dummy.begin(),dummy.end());
    map<ulld,ulld> ans;
    for(ulld i=2,j=0;i<=(ulld)sqrt(n) && j<t;i++){
        if(i*i <=dummy[j]){
            pc+=primes[i];
        }else{
            while(i*i>dummy[j]){
                ans[dummy[j]]=pc;
                j++;
            }
            pc+=primes[i];
        }
	}
	ans[dummy[t-1]]=pc;
	for(ulld i=0;i<t;i++){
	    cout << ans[tests[i]] << endl;   
	}
	return 0;
}