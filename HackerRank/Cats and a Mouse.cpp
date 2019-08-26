// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    int da,db;
    if(z-x>=0){
        da=z-x;
    }
    else{
        da=x-z;
    }
    if(z-y>=0){
        db=z-y;
    }
    else{
        db=y-z;
    }
    if(da>db){
        return "Cat B";
    }
    else if(da<db){
        return "Cat A";
    }
    else{
        return "Mouse C";
    }
}
