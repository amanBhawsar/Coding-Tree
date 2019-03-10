#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
    while(t--){
        int op=0;
        int f=0;
        int arr[100000]={0};
        int cp1[100000]={0};
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> arr[i];
        }
        while(1){

            if(op>20){
                f=1;
                break;
            }
            for(int i=1;i<=n;i++){//op++
                if(arr[i]>n || arr[i]<1){
                    f=1;
                    break;
                }
                cp1[i]=arr[arr[i]];
            }

            op++;
            if(f==1){
                break;
            }
            int cou=0;
            for(int i=1;i<=n;i++){
                if(i==cp1[i]){
                    cou++;
                }
            }
            if(cou==n){
                f==0;
                break;
            }
            for(int i=1;i<=n;i++){
                arr[i]=cp1[i];
            }
        }
        if(f==1){
            cout << "-1" << endl;
        }else{
            cout << op << endl;
        }
    }
}
