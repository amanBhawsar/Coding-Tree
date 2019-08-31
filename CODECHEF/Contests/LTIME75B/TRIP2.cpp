#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k,f=0;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(k==2 && n>2){

            if(arr[0]==-1){
                for(int i=1;i<n;i++){
                    if(arr[i]!=-1){
                        if(i%2==0){
                            arr[0]=arr[i];
                        }else{
                            if(arr[i]==1){
                                arr[0]=2;
                            }else{
                                arr[0]=1;
                            }
                        }
                    }
                }
            }



            for(int i=1;i<n-1;i++){
                if(arr[i]==-1){
                    if(arr[i+1]==-1){
                        if(arr[i-1]==1){
                            arr[i]=2;
                        }else{
                            arr[i]=1;
                        }
                        continue;
                    }
                    if(arr[i-1]==arr[i+1]){
                        if(arr[i-1]==1){
                            arr[i]=2;
                        }else{
                            arr[i]=1;
                        }
                        continue;
                    }
                    cout << "NO" << endl;
                    f=1;
                    break;
                }
            }
            if(f==1){
                continue;
            }
        }

        if(n==1){
            cout << "YES" << endl;
            if(arr[0]!=-1){
                cout << arr[0] << " ";
            }else{
                cout << "1" << " ";
            }
            cout << endl;
            continue;
        }




        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            if(arr[i]!=-1){
                cout << arr[i] << " ";
                continue;
            }
            if(i==0){
                if(arr[i+1]==1){
                    arr[i]=2;
                    cout << "2" << " ";
                }else{
                    arr[i]=1;
                    cout << "1" << " ";
                }
            }else if(i==n-1){
                if(arr[i-1]==1){
                    cout << "2" << " ";
                }else{
                    cout << "1" << " ";
                }
            }else if(arr[i]==-1){
                int hash[5]={0};
                if(arr[i-1]<5){
                    hash[arr[i-1]]++;
                }
                if(arr[i+1]<5 && arr[i+1]>0){
                    hash[arr[i+1]]++;
                }
                for(int j=1;j<5;j++){
                    if(hash[j]==0){
                        arr[i]=j;
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

	return 0;
}

