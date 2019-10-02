#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,flag=0;
    cin >> n;
    vector<char> vec1{'a','e','i','o','u'};
    vector<char> vec{'a','e','i','o','u'};
    if(n%5==0){

    }
    for (int i=1;i<=sqrt(n);i++){
        if (n%i == 0){
            a = i;
            b = n/i;
            if((a>=5) && (b>=5)){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout << "-1";
        return 0;
    }
    int c=0;
    int k;
    for(int i=0;i<a;i++){
        k = b;
        k = k-5;
        if(i<5){
            rotate(vec1.begin(), vec1.begin()+1, vec1.end()); 
            for (int j=0;j<5;j++){
                cout<<vec1[j];
            }
            char hi = vec[i%5];
            for(int j=0;j<k;j++){
                cout << hi;
            }
        }
        else{
            for (int j=0;j<5;j++){
                cout<<vec1[j];
            }
            while(k--){
                cout << "a";
            }
        }
    }
    
}