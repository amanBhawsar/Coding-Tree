#include <iostream>
using namespace std;
int main(){
    int n,ans=0,temp;
    cin >> n;
    char arr[30];
    int count[26]={0};
    while(n--){
        cin >> arr;
        count[arr[0]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]==3){
            ans += 1;
            continue;
        }
        if(count[i]>2){
            if(count[i]%2==0){
                temp = count[i]/2;
                ans += temp*(temp-1);
            }
            else{
                temp = (count[i]+1)/2;
                ans += (temp*(temp-1))/2;
                temp--;
                ans += (temp*(temp-1))/2;
            }
        }
    }
    cout << ans << endl;
}