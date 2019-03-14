#include <bits/stdc++.h>
using namespace std;
int arr[100000][5];
char ch[1005];
int temp[5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin  >> t;
    while(t--){
        int n,i,j,count=0,k=0,c5=0,sum;
        cin >> n;
        for(i=0;i<n;i++){
            j=0;
            int c[26]={0};
            cin >> ch ;
            while(ch[j]!='\0'){
                c[ch[j]-'a']=1;
                j++;
                sum=c[0]+c[4]+c[8]+c[14]+c[20];
                if(sum==5){
                    c5++;
                    break;
                }
            }
            if(sum!=5){
                arr[k][0]=c[0];
                arr[k][1]=c[4];
                arr[k][2]=c[8];
                arr[k][3]=c[14];
                arr[k][4]=c[20];
                k++;
            }
        }
        for(i=0;i<n-1-c5;i++){
            for(j=i+1;j<n-c5;j++){

                    temp[0]=arr[i][0] | arr[j][0];
                    if(temp[0]==0){
                        continue;
                    }
                    temp[1]=arr[i][1] | arr[j][1];
                    if(temp[1]==0){
                        continue;
                    }
                    temp[2]=arr[i][2] | arr[j][2];
                    if(temp[2]==0){
                        continue;
                    }
                    temp[3]=arr[i][3] | arr[j][3];
                    if(temp[3]==0){
                        continue;
                    }
                    temp[4]=arr[i][4] | arr[j][4];
                    if(temp[4]==0){
                        continue;
                    }
                    count++;
            }
        }
        count+=(c5*(2*n-c5-1))/2;
        cout << count << endl;
    }
    return 0;
}
