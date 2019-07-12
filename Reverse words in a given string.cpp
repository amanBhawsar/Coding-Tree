void reverseWords(char *s) {
    string ans = "";
    string temp = "";
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='.'){
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans=ans+".";
            temp = "";
        }else{
            temp+=getString(s[i]);
        }
    }
    if(temp.length()>0){
        reverse(temp.begin(),temp.end());
            ans+=temp;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.length();i++){
        cout << ans[i];
    }
    s[0]='\0';
}