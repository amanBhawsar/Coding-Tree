#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t;
    cin >> t;
    while(t--){
        long int n,z,ans=0;
        priority_queue <long int, vector<long int>, greater<long int> > pq; 
        cin >> n;
        for(long int i=0;i<n;i++){
            cin >> z;
            pq.push(z);
        }
        long int a,b;
        while(pq.empty()==false){
            a=pq.top();
            pq.pop();
            if(pq.empty()==true){
                cout << ans << endl;
                continue;
            }
            b=pq.top();
            pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
    }
    return 0;
}