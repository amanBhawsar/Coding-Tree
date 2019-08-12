    while(n){
        arr[j]=n%2;
        n=n/2;
        j++;
    }
    for(int i=j;i>=0;i--){
        if(arr[i]==1)
            count++;
        else{
             status=1;
            if(k<count){
                k=count;
                count=0;
                if(i==0)
                    count++;
            }
            else{
                count=0;
            }
        }
    }
    if(count>k)
        printf("%d",count);
    else if(status==1)
        printf("%d",k);
    else
        printf("%d",count);
        