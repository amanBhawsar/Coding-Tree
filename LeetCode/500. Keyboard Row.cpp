class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
        unordered_set<char> row3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        vector<unordered_set<char>> rows {row1, row2, row3};
        vector<string> ans;
        int f,no;
        char ch;
        for(int i=0;i<words.size();i++){
            ch = tolower(words[i][0]);
            if(row1.find(ch)!=row1.end()){
                f=0;
            }else if(row2.find(ch)!=row2.end()){
                f=1;
            }else{
                f=2;
            }
            no=0;
            for(int j=1;j<words[i].size();j++){
                if(rows[f].find(tolower(words[i][j]))==rows[f].end()){
                    no=1;
                    break;
                }
            }
            if(no==0)
                ans.push_back(words[i]);
        }
        return ans;
    }
};