
/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    char ans[8];
    if(s[8]=='P'){
        s[8]='\0';
        s[9]='\0';
        char a = '4';
        int z = s[0]-'0',o=s[1]-'0';
        z=10*z+o;
        z=(z+12);
        if(z==24){
            for(z=0;z<8;z++){
                ans[z]=s[z];
            }
            return ans;
        }
        o=z%10;
        z=z/10;
        s[0]=z+'0';
        s[1]=o+'0';
        for(z=0;z<8;z++){
            ans[z]=s[z];
        }
        return ans;
    }
    else{
        if(s[0]=='1'&&s[1]=='2'){
            s[0]='0';
            s[1]='0';
        }
        s[8]='\0';
        s[9]='\0';
        for(int z=0;z<8;z++){
            ans[z]=s[z];
        }
        return ans;
    }

}
