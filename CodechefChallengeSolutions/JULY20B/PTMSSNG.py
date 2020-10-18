for _ in range(0,int(input())):
    n=int(input())
    x={}
    y={}
    for i in range(0,(4*n)-1):
        a,b=map(int,input().split())
        if a not in x:
            x[a]=1
        else:
            if x[a]==0:
                x[a]+=1
            else:
                x[a]=x[a]-1
        if b not in y:
            y[b]=1
        else:
            if y[b]==0:
                y[b]+=1
            else:
                y[b]=y[b]-1
    for key, value in x.items(): 
        if value==1:
            
            print(key,end=" ")
            break
    for key, value in y.items(): 
        if value==1:
            
            print(key)
            break