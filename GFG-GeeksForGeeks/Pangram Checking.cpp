bool checkPangram (string &str)
{
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            arr[str[i]-'A']++;
        }else{
            arr[str[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            return false;
        }
    }
    return true;
}