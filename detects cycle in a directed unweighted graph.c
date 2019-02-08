#include <stdio.h>
int n;
int visited[5001]={0};
int comp[5001]={0};
int g[5001][5001]={0};
int DFS(int i){
    int j;
    if(visited[i]==0){
        visited[i]=1;
        comp[i]=1;
        for(j=1;j<=n;j++){
            if(g[i][j]==1){
                if((visited[j]==0)&&(DFS(j)==1)){
                    return 1;
                }
                else if(comp[j]==1){
                    return 1;
                }
            }
        }

    }
    comp[i]=0;
    return 0;
}
void main(){
    int m,i,u,v;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        g[u][v]=1;
    }
    for(i=1;i<=n;i++){
        if(DFS(i)==1){
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
    return;
}
