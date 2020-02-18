int anagram(string s) {
    int size = s.size();
    if(size%2==1){
        return -1;
    }
    int c1[26]={0};
    int c2[26]={0};

    for(int i=0;i<size/2;i++){
        c1[s[i]-'a']++;
    }
    for(int i=size/2;i<size;i++){
        c2[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        sum+=abs(c1[i]-c2[i]);
    }
    sum=sum/2;
    return sum;
}