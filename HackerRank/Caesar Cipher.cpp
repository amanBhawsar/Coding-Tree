string caesarCipher(string s, int k) {
    for(int i=0;i<s.size();i++){
        if(s[i]<='z' && s[i]>='a')
            s[i]=(s[i]-'a'+k)%26 + 'a';
        else if(s[i]<='Z' && s[i]>='A'){
            s[i]=(s[i]-'A'+k)%26 + 'A';
        }
    }
    return s;
}