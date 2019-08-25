void countSort(char arr[])
{
    int c[26]={0};
    for(int i=0;i<strlen(arr);i++){
        c[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        while(c[i]--){
            printf("%c",'a'+i);
        }
    }
    arr[0]='\0';
}