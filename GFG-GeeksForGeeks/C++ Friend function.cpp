void check_name(student k)
{
    sort(k.first_name.begin(),k.first_name.end());
    sort(k.last_name.begin(),k.last_name.end());
    
    if(k.first_name==k.last_name){
        cout << "ANAGRAM" << endl;
    }else{
        cout << "NOT ANAGRAM" <<endl;
    }
    
    
}