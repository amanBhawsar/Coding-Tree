class MinStack {
public:
    int mini;
    stack<pair<int,int>> st;
    MinStack() {
        stack<pair<int,int>> st();
        mini=INT_MAX;
    }
    
    void push(int x) {
        if (st.empty()) {
            mini = x;
        }else{
            mini=min(st.top().second,x);
        }
        st.push({x,mini});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */