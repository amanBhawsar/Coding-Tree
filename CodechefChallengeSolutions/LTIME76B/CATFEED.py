# cook your dish here
t=int(input())
while t!=0:
    t=t-1
    n,m=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    l=[]
    flag=0
    for i in range(n):
        l.append(0)
    for i in range(len(a)):
        l[a[i]-1]+=-1
        if(max(l)-min(l))>1:
            flag=1
            break
    if(flag==1):
        print("NO")
    else:
        print("YES")
            
          