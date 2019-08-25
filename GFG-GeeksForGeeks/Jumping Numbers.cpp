#include<bits/stdc++.h>
using namespace std;
vector <int>arr;
void bfs(int x,int num){
    queue<int> q;
    q.push(num);
    while(!q.empty()){
        num = q.front();
        q.pop();
        if(num<=x){
            arr.push_back(num);
            int ld = num%10;
            if(ld==0){
                q.push((num*10)+(ld+1));
            }else if(ld==9){
                q.push((num*10)+(ld-1));
            }else{
                q.push((num*10)+(ld-1));
                q.push((num*10)+(ld+1));
            }
        }
    }
}

void printJumping(int n){
    arr.push_back(0);
    for(int i=1;i<=9 && i<=n;i++){
        bfs(n,i);
    }
    
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    printJumping(n);
	    sort(arr.begin(),arr.end());
	    for(int i=0;i<arr.size();i++){
	        cout << arr[i] << " ";
	    }
	    arr.clear();
	    cout << endl;
	}
	return 0;
}