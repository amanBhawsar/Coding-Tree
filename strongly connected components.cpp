#include <bits/stdc++.h>
using namespace std;
int n;
int single=0;
int g[5001][5001]={0};
int G[5001][5001]={0};
stack<int> st;
int visited[5001]={0};
void DFStransp(int i)
{
    int j;
    single++;
    visited[i]=1;
	for(j=1;j<=n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFStransp(j);
}
void DFS(int i)
{
    int j;
    visited[i]=1;
	for(j=1;j<=n;j++)
       if(!visited[j]&&g[i][j]==1)
            DFS(j);

    st.push(i);
}
int main(){
    int k,m,i,u,v,p,count=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u][v]=1;
    }
    for(i=1;i<=n;i++){
        if(visited[i]==0){
            DFS(i);
        }
    }
    for(i=1;i<=n;i++){
        visited[i]=0;
    }
    for(i=1;i<=n;i++){
        for(k=1;k<=n;k++){
            G[k][i]=g[i][k];
        }
    }
    while(!st.empty()){
        p = st.top();
        st.pop();
        if(visited[p]==0){
            DFStransp(p);
            if(single>1){
                count++;
            }
            single=0;
        }
    }
    cout << count << endl;
    return 0;
}
