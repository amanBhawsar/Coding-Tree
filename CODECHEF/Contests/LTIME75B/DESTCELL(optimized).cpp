#include <bits/stdc++.h>
using namespace std;

pair<int,int> hero1[1000001];
pair<int,int> hero2[1000001];
bool visited[1001][1001];

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k=0;
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                hero1[k++]={i,j};
            }
        }
        k=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                hero2[k++]={i,j};
            }
        }
        for(int i=1;i<=m*n;i++){
            int ans=0;
            for(int j=0;j<m*n;j+=i){
                visited[hero1[j].first][hero1[j].second]=1;
                ans++;
            }
            for(int j=0;j<m*n;j+=i){
                if(!visited[hero2[j].first][hero2[j].second]){
                    ans++;
                }
            }
            cout << ans << " ";
            for(int j=0;j<m*n;j+=i){
                visited[hero1[j].first][hero1[j].second]=0;
            }
        }
        cout << endl;
    }
	return 0;
}
