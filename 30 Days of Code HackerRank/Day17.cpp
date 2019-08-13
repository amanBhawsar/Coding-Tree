class Calculator {
    public:
    int power(int a,int b){
        if(a<0 || b <0){
            throw runtime_error("n and p should be non-negative");
        }
        return pow(a,b);
    }
};