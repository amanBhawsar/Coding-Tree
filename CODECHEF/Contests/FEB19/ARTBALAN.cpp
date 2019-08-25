#include<string.h>
#include<limits.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long int t,n,i,sum,d,possSet,k,j;
    char ch[1999999];
    cin >> t;
    while(t--){
        long int freq[26]={0};
        long int ans,min;
        sum=0;
        long int len;
        cin >> ch;
        len=strlen(ch);
        for(i=0;i<len;i++){
            freq[ch[i]-'A']++;
        }
        for(i=0;i<26;i++){
            sum+=freq[i];
        }
        min=INT_MAX;
        sort(freq,freq+26);
        for(j=1;j<=len;j++){
            if(len%j==0){
                ans=0;
                d=j;
                possSet=sum/d;    //no of sets possible
                if(possSet>26){
                    continue;
                }
                k=25;
                for(i=1;i<=possSet;i++){
                    if(freq[k]<d){
                        ans=ans+d-freq[k];
                    }
                    k--;
                }
                if(min>ans){
                    min=ans;
                }
            }
        }
        cout << min <<endl;
    }
    return 0;
}
