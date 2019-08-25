/*This is a function problem.You only need to complete the function given below*/
/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d)
{
    for(int i=0;i<d-1;i++){
        number/=10;
    }
    return number%10;
}
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
    long long int count=0;
    for(int i=0;i<=number;i++){
        for(int j=i;j!=0;){
            if(count2sinRangeAtDigit(j,1)==2){
                count++;
            }
            j=j/10;
        }
    }
    return count;
}