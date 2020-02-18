string funnyString(string s) {
    int flag=0;
    for(int i=0,j=s.size()-1;i<s.size()-1;i++,j--){
        if(abs(s[i]-s[i+1])==abs(s[j]-s[j-1])){
            flag=0;
        }else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        s = "Not Funny";
    }else{
        s = "Funny";
    }
    return s;
}