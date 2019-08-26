string kangaroo(int x1, int v1, int x2, int v2) {
    int j1=0,j2=0;
    while(1){
        if(x1==x2&&j1==j2){
            return "YES";
        }
        if(x1==x2){
            return "NO";
        }
        if(x1>x2&&v1>=v2){
            return "NO";
        }
        if(x1<x2&&v1<=v2){
            return "NO";
        }
        j1++;
        j2++;
        x1+=v1;
        x2+=v2;
    }
}
