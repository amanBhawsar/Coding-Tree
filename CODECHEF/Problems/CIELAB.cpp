#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >>a >>b;
	a = a-b;
	if(a%10==9){
	    cout<<a-1<<endl;
	}else{
	    cout<<a+1<<endl;
	}
	return 0;
}
