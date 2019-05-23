#include <iostream>

using namespace std;
char a[100000];
char b[100000];

int main() {
    int t;
    cin >> t;
    while(t--){
        int s1,i=0,ans=0;
        int arr[26]={0};
        cin >> a;
        cin >> b;
        while(a[i]!='\0'){
            arr[a[i]-'a']++;
            i++;
        }
        s1=i;
        i=0;
        while(b[i]!='\0'){
            if(arr[b[i]-'a']>0){
                arr[b[i]-'a']--;
                ans++;
            }
            i++;
        }
        ans = i + s1 - 2*ans;
        cout << ans << endl;
    }
    return 0;
}