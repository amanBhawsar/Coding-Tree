#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
    stack<char> s;
    queue<char> q;

    public:
    void pushCharacter(char ch){
        s.push(ch);
    }
    void enqueueCharacter(char ch){
        q.push(ch);
    }
    char popCharacter(){
        char top = s.top();
        s.pop();
        return top;
    }
    char dequeueCharacter(){
        char top = q.front();
        q.pop();
        return top;
    }
};


