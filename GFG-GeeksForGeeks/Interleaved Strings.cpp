bool isInterleave(string a, string b, string c) 
{
    if(!(a.length() || b.length() || c.length())){
        return true;
    }
    if(c.length()==0){
        return false;
    }
    return ((a[0]==c[0])&&isInterleave(a.substr(1),b,c.substr(1))) || ((b[0]==c[0])&&isInterleave(a,b.substr(1),c.substr(1)));
}