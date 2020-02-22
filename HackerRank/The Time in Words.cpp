string timeInWords(int h, int m) {
    vector<string> numbers = {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    string ans="";
    if(m==0){
        ans+=numbers[h]+" o' clock";
    }else if(m==1){
        ans+=numbers[m]+" minute past "+numbers[h];
    }else if(m<15){
        ans+=numbers[m]+" minutes past "+numbers[h];
    }else if(m==15){
        ans+="quarter past "+numbers[h];
    }else if(m<30){
        ans+=numbers[m]+" minutes past "+numbers[h];
    }else if(m==30){
        ans+="half past "+numbers[h];
    }else if(m==31){
        ans+=numbers[1]+" minute to "+numbers[h+1];
    }else if(m<45){
        ans+=numbers[60-m]+" minutes to "+numbers[h+1];
    }else if(m==45){
        ans+="quarter to "+numbers[h+1];
    }else if(m<59){
        ans+=numbers[60-m]+" minutes to "+numbers[h+1];
    }else{
        ans+=numbers[60-m]+" minute to "+numbers[h+1];
    }
    return ans;
}