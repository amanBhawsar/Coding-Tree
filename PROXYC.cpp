#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int i;
	    cin >> i;
	    char str[1005];
	    for(int k=0;k<i;k++){
	        cin >> str[k];
	    }
	    int initAttendance=0;
	    int possibleProxies=0;
	    for(int k=0;k<i;k++){
	        if(str[k]=='P'){
	            initAttendance++;
	        }
	    }
	   // cout<<initAttendance<<endl;
	    if(100*initAttendance>=75*i){       //here i = no of days
	        cout << "0"<<endl;
	        continue;
	    }
	    if(i>4){
	        for(int j=2;j<i-2;j++){
	            if(((str[j-1]=='P')||(str[j-2]=='P'))&&((str[j+1]=='P')||(str[j+2]=='P'))&&str[j]=='A'){
	                possibleProxies++;
	            }
	        }
	        if((initAttendance+possibleProxies)*100>=75*i){
	            if(3*i%4==0){
	                cout << ((3*i)/4)-initAttendance<<endl;
	            }
	            else{
	                cout << (3*i)/4-initAttendance+1 << endl;
	            }
	        }
	        else{
	            cout<<"-1"<<endl;   
	        }
	    }else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
