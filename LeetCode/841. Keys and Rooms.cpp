class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> st;
        int k,n=rooms[0].size();
        int visited[rooms.size()+1];
        for(int i=0;i<n;i++){
            st.push(rooms[0][i]);
        }
        n=rooms.size();
        for(int i=0;i<n;i++)   visited[i]=0;
        visited[0]=1;
        while(!st.empty()){
            k=st.top();st.pop();
            visited[k]=1;
            n=rooms[k].size();
            for(int i=0;i<n;i++){
                if(visited[rooms[k][i]]==0){
                    st.push(rooms[k][i]);
                }
            }            
        }
        n=rooms.size();
        for(int i=0;i<n;i++)
            if(visited[i]!=1){
                return false;
            }
        return true;
    }
};