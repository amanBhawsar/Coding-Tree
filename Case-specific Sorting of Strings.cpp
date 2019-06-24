string caseSort(string str, int n){
    int i,k=0;
    string temp = str;
    string res;
    sort(temp.begin(),temp.end());
    for(i=0;i<temp.length();i++){
        if(temp[i]-'a'<26 && temp[i]-'a'>=0){
            break;
        }
    }
    for(int j=0;j<str.length();j++){
        if(str[j]-'a'<26 && str[j]-'a'>=0){  //smallcase
            res.push_back(temp[i]);
            // cout<<str[j]<<" ";
            i++;
        }else{
            res.push_back(temp[k]);
            k++;
        }
    }
    return res;
}