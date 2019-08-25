t = int(input())
for i in range(0,t):
    n=int(input())
    ls=[]

    c5=0
    count=0
    for j in range(n):
        st = input()
        if len(set(st))==5:
            c5+=1                        #aeiou all present
        else:
            ls.append(set(st))

    for j in range(n-1-c5):
        if len(ls[j])==5:
            count+=n-j-1
            continue
        for k in range(j+1,n-c5):
            if len(ls[j])+len(ls[k])<5:
                continue
            temp=set()
            temp=set(ls[j]).union(set(ls[k]))
            if len(temp)==5:
                count+=1
    for j in range (c5):
        count+=n-1-j
print(count)