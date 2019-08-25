#include <iostream>
using namespace std;
char arr[6];
void recur(int l,int r){
    if(l==r){
        for(int i=0;i<=r;i++)
            cout << arr[i];
        cout << " ";
        return;
    }
    else{
        for(int i=l;i<=r;i++){
            int temp = arr[l];
            arr[l]=arr[i];
            arr[i]=temp;
            recur(l+1,r);
            temp = arr[l];
            arr[l]=arr[i];
            arr[i]=temp;
        }
    }
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int i=0;
	    cin >> arr;
	    while(arr[i]!='\0'){
	        i++;
	    }
	    recur(0,i-1);
	    cout << endl;
	}
	return 0;
}