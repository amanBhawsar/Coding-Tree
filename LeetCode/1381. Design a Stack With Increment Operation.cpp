class CustomStack {
private:
    int maxi;
    int size;
    int s[1005];
public:
    CustomStack(int maxSize) {
        maxi=maxSize;
        size=0;
    }
    
    void push(int x) {
        if(size<maxi){
            s[size]=x;
            size++;           
        }
    }
    
    int pop() {
        if(size>0){
            size--;
            return s[size];
        }
        return -1;
    }
    
    void increment(int k, int val) {
        k=min(k,size+1);
        for(int i=0;i<k;i++){
            s[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */