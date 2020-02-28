#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        double r;
        cin>>r;
	    double x1,x2,x3,y1,y2,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    double d1=pow((pow((x1-x2),2)+(pow((y1-y2),2))),(0.5));
	    double d2=pow((pow((x1-x3),2)+(pow((y1-y3),2))),(0.5));
	    double d3=pow((pow((x3-x2),2)+(pow((y3-y2),2))),(0.5));
	    if(((d1<=r)&&(d2<=r)) || ((d2<=r)&&(d3<=r)) || ((d1<=r)&&(d3<=r)) ){
	        cout<<"yes"<<"\n";
	    }else{
	        cout<<"no"<<"\n";
	    }
	}
	return 0;
}
