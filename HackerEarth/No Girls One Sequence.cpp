#include <iostream>
#include <vector>
using namespace std;
long gcd(long a,long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long findGCD(vector <long>arr, long n, long p){
    long result = arr[0]+p;
    for (int i = 1; i < n; i++){
        if(result==1){
            break;
        }
        result = gcd(arr[i]+p, result);
    }
    return result;
}

int main() {
	long n,l,r,k,i,ans=0,max=0;
	cin >> n >> l >> r;
    vector <long>arr;
    i=n;
    while(i--){
        cin >> k;
        arr.push_back(k);
    }
    if(r-l>500){
        r=l+500;
    }
    for(i=l;i<=r;i++){
        ans=findGCD(arr,n,i);
        if(ans>max){
            max=ans;
        }
    }
    cout << max << endl;
}
Language: C++
