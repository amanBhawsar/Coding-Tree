#include<bits/stdc++.h>
using namespace std;

void printMed(double arr[],int n){
    priority_queue<double> s;
    priority_queue<double,vector<double>,greater<double> > g;
    int med = arr[0];
    s.push(arr[0]);
    cout << med << endl;
    
    for(int i=1;i<n;i++){
        double x = arr[i];
        if(s.size() > g.size()){
            if(x<med){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            med = (s.top()+g.top())/2;
        }else if(s.size()==g.size()){
            if(x<med){
                s.push(x);
                med=s.top();
            }else{
                g.push(x);
                med=g.top();
            }
        }else{  
            if(x>med){
                s.push(g.top());
                g.pop();
                g.push(x);
            }else{
                s.push(x);
            }
            med = (s.top()+g.top())/2;
        }
        cout << med << endl;
    }
}


int main()
 {
	int n;
	double arr[1000000];
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	printMed(arr,n);
	return 0;
}