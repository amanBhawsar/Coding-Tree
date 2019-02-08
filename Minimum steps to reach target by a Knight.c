int arr[8][8] = {0};
int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}
int abs(int p){
    if(p==0){
        return 0;
    }
    if(p>0){
        return p;
    }
    else{
        return (-1)*p;
    }
}
int count=0;
int getsteps(int x, int y,int tx, int ty, int n){
    if ((x==1&&y==1&&tx==2&&ty==2)||(x==2&&y==2&&tx==1&&ty==1))
			count=4;
	else if ((x==1&&y==n&&tx==2&&ty==n-1)||(x==2&&y==n-1&&tx==1&&ty==n))
            count=4;
	else if ((x==n&&y==1&&tx==n-1&&ty==2)||(x==n-1&&y==2&&tx==n&&ty==1))
            count=4;
	else if ((x==n&&y==n&&tx==n-1&&ty == n - 1)||(x == n - 1 && y == n - 1 && tx == n && ty == n))
            count=4;
	else {
		arr[1][0] = 3;
		arr[0][1] = 3;
		arr[1][1] = 2;
		arr[2][0] = 2;
		arr[0][2] = 2;
		arr[2][1] = 1;
		arr[1][2] = 1;
	}
    	if (x == tx && y == ty)
            count = arr[0][0];
        else{
                if(arr[abs(x-tx)][abs(y-ty)]!=0)
                    count=arr[abs(x-tx)][abs(y-ty)];
                else{
                    int x1,y1,x2,y2;
                    if(x<=tx) {
                        if(y<=ty) {
                            x1=x+2;
                            y1=y+1;
                            x2=x+1;
                            y2=y+2;
                        }
                        else{
                            x1=x+2;
                            y1=y-1;
                            x2=x+1;
                            y2=y-2;
                        }
                    }
                    else{
                        if(y<=ty){
                            x1=x-2;
                            y1=y+1;
                            x2=x-1;
                            y2=y+2;
                        }
                        else{
                            x1=x-2;
                            y1=y-1;
                            x2=x-1;
                            y2=y-2;
                        }
                }
        arr[abs(x-tx)][abs(y-ty)]=min(getsteps(x1,y1,tx,ty,n),getsteps(x2,y2,tx,ty,n))+1;
        arr[abs(y-ty)][abs(x-tx)]=arr[abs(x-tx)][abs(y-ty)];
        count=arr[abs(x-tx)][abs(y-ty)];
		}
	}
	return count;
}

