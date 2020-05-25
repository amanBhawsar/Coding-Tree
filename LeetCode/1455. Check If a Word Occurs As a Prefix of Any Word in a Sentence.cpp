class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.find(searchWord)!= string::npos){
            int s=0,n=sentence.size(),k=searchWord.size();
            for(int i=0;i<n-k+1;i++){
                int c=0;
                if(sentence[i]==' '){
                    s++;
                }
                int z=i;
                if(i==0 || sentence[i-1]==' '){
                    for(int j=0;j<k;j++){
                        if(sentence[z]==searchWord[j]){
                            c++;
                        }else{
                            break;
                        }
                        z++;
                    }
                    if(c==k){
                        return (s+1);
                    }
                }
            }
        }
        return -1;
    }
};