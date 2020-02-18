string happyLadybugs(string b) {
    int c=0,flag=0;
    int ctr[26]={0};
    for(int i=0;i<b.size();i++){
        if(b[i]=='_'){
            c++;
        }else{
            ctr[b[i]-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        if(ctr[i]==1){
            flag=1;
            break;
        }
    }
    if(c==0 && flag==0){
        for(int i=0;i<b.size()-1;i++){
            if(b[i]==b[i+1]){
                c++;
            }else{
                if(c==0){
                    return "NO";
                }else{
                    c=0;
                }
            }
        }
    }
    if(flag==1){
        return "NO";
    }
    return "YES";
}