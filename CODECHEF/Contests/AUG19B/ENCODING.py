t=int(input())
for i in range(t):
    ls1=list(map(int,input().split()))
    ls2=list(map(int,input().split()))

    sum=0
    for z in range(ls1[1],ls2[1]+1):
        k=0
        m=str(z)
        m=list(m)
        for j in range(1, len(m)):
            if m[k]==m[j]:
                m[j]='0'
            else:
                k=j
        m="".join(m)
        sum+=int(m)
    print(sum%1000000007)

    