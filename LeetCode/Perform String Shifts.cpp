class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int rot=0;
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                rot-=shift[i][1];
            }else{
                rot+=shift[i][1];
            }
        }
        if(rot>0){
            rot=rot%s.size();
            rot=s.size()-rot;
        }else{
            rot=-rot;
            rot=rot%s.size();
        }
        
        rotate(s.begin(), s.begin()+rot, s.end());
        return s;
    }
};