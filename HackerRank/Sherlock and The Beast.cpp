void decentNumber(int n) {
    int flag=0,c5=0,c3=0;
    while(1){
        if(n<0){
            flag=1;
            break;
        }
        if(n==0){
            break;
        }
        if(n%3==0){
            c5=n;
            break;
        }else{
            n=n-5;
            c3+=5;
        }
    }
    
    if(flag==1){
        cout << "-1";
    }else{
        while(c5--){
            cout << "5";
        }
        while(c3--){
            cout << "3";
        }
    }
    cout << endl;
}