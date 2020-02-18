string gameOfThrones(string s) {
    int count[26]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(count[i]%2==1){
            odd++;
        }
    }
    if(odd>1){
        return "NO";
    }
    return "YES";
}