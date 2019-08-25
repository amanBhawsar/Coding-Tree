#include <bits/stdc++.h>
using namespace std;
int counts=0;
int arr[25];
int k=0;
void my(int s,int e,int d){
    int i,c=0,min=10;
    for(i=s;i<e;i++){
            if(arr[i]==min){
                c++;
            }
            if(arr[i]<min){
                min=arr[i];
                c=1;
            }
    	}
    	for(i=e-1;i>=0;i--){
            if(arr[i]==min){
                break;
            }
    	}
    	k=i+1;
    	if(d<min){
            min=d;
    	}
    	while(c--){
            cout << min;
            counts++;
    	}
}
int main() {
    int t;
    cin>>t;
    while(t--){
    	int d,i,c=0,j,min=10,e;
    	string n;
    	cin >> n ;
    	cin >> d;
    	k=0;
    	e=n.size();
    	for(i=0;i<e;i++){
            arr[i]=n[i]-'0';
    	}
    	//calculate min
    	while(k!=e){
            my(k,e,d);
    	}
    	while(counts!=e){
            cout<<d;
            counts++;
    	}
    	cout<<"\n";
    	counts=0;
    }
    return 0;
}
