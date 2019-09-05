string powerOfString(string s,int k){
    if(k==0){
        return "1";
    }
    string temp=powerOfString(s,k/2);
    if(k%2==0){
        return multiplyStrings(temp,temp);
    }else{
        return multiplyStrings(s,(multiplyStrings(temp,temp)));
    }
}