#include <iostream>
using namespace std;

int main() {
	int n,max=0;
	cin >> n;
	int arr[100000];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	    if(arr[i]>max){
	        max=arr[i];
	    }
	}
	int secLargest=0;
	for(int i=0;i<n;i++){
	    if((arr[i]!=max)&&(arr[i]>secLargest)){
	        secLargest=arr[i];
	    }
	}
	cout << secLargest;
	return 0;
}
