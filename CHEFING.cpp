#include<iostream>
using namespace std;
int main(){//arr of 1005X26
    int t,n,i,j;
    char ch[300];
    cin >> t;
    while(t--){
        int c=0;
        cin >> n ;
        int ans[26]={0};
        int arr[1005][26]={0};
        for(i=0;i<n;i++){
            cin >> ch;
            j=0;
            while(ch[j]!='\0'){
                arr[i][ch[j]-'a']=1;
                j++;
            }
        }
        for(j=0;j<26;j++){
            for(i=0;i<n;i++){
                if(arr[i][j]!=1){
                    ans[j]=0;
                    break;
                }
                else{
                    ans[j]=1;
                }
            }
        }
        for(i=0;i<26;i++){
            if(ans[i]==1){
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
