Difference(int []a){
    elements=a;   
}

void computeDifference(){
    int max=elements[0],min=elements[0];
        for(int i=1;i<elements.length;i++){
            if(max<elements[i])
                max=elements[i];
            else if(min>elements[i])
                min=elements[i];
        }
        if((max-min)>0)
            maximumDifference=max-min;
        else
            maximumDifference=min-max;
}