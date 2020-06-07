class BrowserHistory {
public:
    stack<string> fwd;
    stack<string> bwd;
    string home="oops";
    BrowserHistory(string homepage) {
        home = homepage;
    }
    
    void visit(string url) {
        bwd.push(home);
        home=url;
        stack<string> ss;
        fwd=ss;
    }
    
    string back(int steps) {
        
        while(!bwd.empty()){
            fwd.push(home);
            home=bwd.top(); bwd.pop();
            steps--;
            if(steps==0){
                break;
            }
        }
        return home;
    }
    
    string forward(int steps) {
        while(!fwd.empty()){
            bwd.push(home);
            home=fwd.top(); fwd.pop();
            steps--;
            if(steps==0){
                break;
            }
        }
        return home;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */