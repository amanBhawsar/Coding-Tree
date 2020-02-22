bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(num == val*val)
        return true;
    return false;
}