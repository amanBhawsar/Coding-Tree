#include<bits/stdc++.h>
using namespace std;

char board[3][3];
bool win(char c){
	bool w1=board[0][0]==c && board[0][1]==c && board[0][2]==c;
	bool w2=board[1][0]==c && board[1][1]==c && board[1][2]==c;
	bool w3=board[2][0]==c && board[2][1]==c && board[2][2]==c;
	bool w4=board[0][0]==c && board[1][0]==c && board[2][0]==c;
	bool w5=board[0][1]==c && board[1][1]==c && board[2][1]==c;
	bool w6=board[0][2]==c && board[1][2]==c && board[2][2]==c;
	bool w7=board[0][0]==c && board[1][1]==c && board[2][2]==c;
	bool w8=board[2][0]==c && board[1][1]==c && board[0][2]==c;
	return w1||w2||w3||w4||w5||w6||w7||w8;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    char s;
	    int cX=0,cO=0;
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
    	        cin >> s;
    	        board[i][j]=s;
    	        if(s=='O'){
    	            cO++;
    	        }else if(s=='X'){
    	            cX++;
    	        }else{
    	            //do nothing
    	        }
	        }
	    }
	    
	       if(win('X') && win('O')){
	            cout << "Invalid" << endl;
	            continue;
	       }
	        if(win('X')){
	            if(cX-cO==1){
	                cout << "Valid" << endl;    
	            }else{
	                cout << "Invalid" << endl;
	            }
	                
	        }else if(win('O')){
	            if(cX==cO){
	                cout << "Valid" << endl;    
	            }else{
	                cout << "Invalid" << endl;
	            }
	        }else{
	            if(cX>cO){
	                cout << "Valid" << endl;
	            }else{
	                cout << "Invalid" << endl;
	            }
	            
	        }
	}
	return 0;
}