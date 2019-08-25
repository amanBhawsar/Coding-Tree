#include <bits/stdc++.h>
using namespace std;
int n;
int g[5001][5001]={0};
int mstSet[5000]={0};
int dist[5000]={0};
void primMST(int k){
    int i,j;
    for(i=1;i<=n;i++){
        dist[i]=INT_MAX;
    }
    dist[k]=0;
    for(j=1;j<n;j++){
        int min = INT_MAX;
        int minIndex;
        for (i=1;i<=n;i++){
            if (mstSet[i]==0&&dist[i]<=min)
                min = dist[i], minIndex = i;
        }
        mstSet[minIndex]=1;
        for (i=1;i<=n;i++) {
            if (g[minIndex][i]&&mstSet[i]==0&&dist[minIndex]!=INT_MAX&&dist[minIndex]+g[minIndex][i]<dist[i]){
                dist[i] = dist[minIndex] + g[minIndex][i];
            }
        }
    }
}
int main(){
    int k,m,i,u,v,w,sum=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> w;
        if(g[u][v]==0 || g[u][v]>w){
            g[u][v]=w;
            g[v][u]=w;
        }
    }
    cin >> k;
    primMST(k);
    for(i=1;i<=n;i++){
        if(k==i){
            continue;
        }
        if(dist[i]!=INT_MAX){
            cout << dist[i] << " ";
        }
        else{
            cout << "-1 ";
        }
    }
    return 0;
}
