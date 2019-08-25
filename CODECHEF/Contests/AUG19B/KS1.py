t=int(input())
for i in range(t):
    n=int(input())
    ls=[]
    ls=list(map(int,input().split()))
        
    for j in range(1,n):
        ls[j]=ls[j-1]^ls[j]
    c=0
    sumo=0
    x=0
    dict={}
    ls1=[-1]
    dict[0]=ls1
    ls2=[]
    for j in range(n):
        x=ls[j]
        ls2.append(x)
        if x in dict.keys():
            dict[x].append(j)
        else:
            ls3=[j]
            dict[x]=ls3
    ls2=set(ls2)
    for key, value in dict.items():
        sumo=0
        sumo=sum(value)
        for j in range(len(value)-1,-1,-1):
            sumo=sumo-value[j]
            c+=value[j]*j-sumo-j
    print(c)