/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> g) {
    int x;
    vector<int> p;
    for(int i=0;i<g.size();i++){
        x=g.at(i);
        if(x<38){
            p.push_back(x);
            continue;
        }
        else{
            if(x%5>=3){
                x+=(5-x%5);
            }
            p.push_back(x);
        }
    }
    return p;
}
