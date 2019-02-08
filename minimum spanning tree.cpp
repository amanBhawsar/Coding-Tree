#include <bits/stdc++.h>
using namespace std;
int n;
int g[5001][5001]={0};
int minWtRecord[5001]={0};
int mstSet[5000]={0};
int key[5000]={0};
void primMST(){
    int i,j;
    for(i=1;i<=n;i++){
        key[i]=INT_MAX;
    }
    key[1]=0;
    minWtRecord[1]=-1;
    for(j=1;j<n;j++){
        int min = INT_MAX;
        int minIndex;
        for (i=1;i<=n;i++){
            if (mstSet[i]==0&&key[i]<min)
                min = key[i], minIndex = i;
        }
        mstSet[minIndex]=1;
        for (i=1;i<=n;i++) {
            if (g[minIndex][i]&&mstSet[i]==0&&g[minIndex][i]<key[i]){
                minWtRecord[i]=minIndex;
                key[i]=g[minIndex][i];
            }
        }
    }
}
int main(){
    int m,i,u,v,w,sum=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> w;
        g[u][v]=w;
        g[v][u]=w;
    }
    primMST();
    for(i=2;i<=n;i++){
        sum = sum + g[i][minWtRecord[i]];
    }
    cout << sum <<endl;
    return 0;
}
