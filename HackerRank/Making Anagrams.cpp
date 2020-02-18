int makingAnagrams(string s1, string s2) {
    int c1[26]={0};
    int c2[26]={0};
    for(int i=0;i<s1.size();i++){
        c1[s1[i]-'a']++;   
    }
    for(int i=0;i<s2.size();i++){
        c2[s2[i]-'a']++;   
    }
    int res=0;
    for(int i=0;i<26;i++){
        res+=abs(c1[i]-c2[i]);  
    }
    return res;
}