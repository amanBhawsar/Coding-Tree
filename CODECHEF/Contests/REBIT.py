import math
def power(x, y, m):
    if y == 0:
        return 1
    p = power(x, y // 2, m) % m
    p = (p * p) % m
    if y % 2 == 0:
        return p
    return ((x * p) % m)
    
def modInverse(a, m):
    return power(a, m - 2, m)
    
def mul(p2, q2):
    p1=p2[:]
    q1=q2[:]
    ans= [0,1]
    if p1[0]==0 or q1[0]==0:
        return ans[:]
    ans[0] = int(p1[0] * q1[0])
    ans[1] = int(p1[1] * q1[1])
    return ans[:]
    
def add(p2, q2):
    p1=p2[:]
    q1=q2[:]
    ans=[0,1]
    if p1[0]==0 and q1[0]==0:
        return ans[:]
    elif p1[0]==0:
        return q1[:]
    elif q1[0]==0:
        return p1[:]
    lcm=0
    gc = int(math.gcd(p1[1],q1[1]))
    lcm= int((p1[1] * q1[1])//gc)
    ans[0] = int((p1[0])*int(lcm // p1[1])+(q1[0])*int(lcm // q1[1]))
    ans[1] = lcm;
    common = int(math.gcd(ans[0],ans[1]))
    if common==0:
        return [0,1]
    ans[0] = int(ans[0] // common)
    ans[1] = int(ans[1] // common)
    return ans[:]
    

t = int(input())
while t>0:
    s=input()
    n=int(len(s))
    u={'1':[1,4],'0':[1,4],'a':[1,4],'A':[1,4]}
    st =[]
    prob = []
    for i in range(n):
        if s[i]==')':
            u1 = (prob.pop()).copy()
            u2 = (prob.pop()).copy()
            st.pop()
            op=st.pop()
            st.pop()
            st.pop()
            if op=='&':
                u['a']=add(mul(u1['1'],u2['a']) ,add(mul(u1['a'],u2['a']) , mul(u1['a'],u2['1'])))
                u['A']=add(mul(u1['1'],u2['A']) , add(mul(u1['A'],u2['A']) , mul(u1['A'],u2['1'])))
                u['1']=mul(u1['1'],u2['1'])
                zz=[u1['0'][1]-u1['0'][0],u1['0'][1]]
                xx=[u2['0'][1]-u2['0'][0],u2['0'][1]]
                u['0']=add(mul(u1['0'],xx[:]) , add (mul(u2['0'],zz[:]), add(mul(u1['0'],u2['0']), add(mul(u1['a'],u2['A']), mul(u1['A'],u2['a'])))))
                prob.append(u.copy())
            elif op=='|':
                u['a']=add(mul(u1['a'],u2['0']) , add(mul(u1['a'],u2['a']) , mul(u1['0'],u2['a'])))
                u['A']=add(mul(u1['A'],u2['0']) , add(mul(u1['A'],u2['A']) , mul(u1['0'],u2['A'])))
                u['0']=mul(u1['0'],u2['0'])
                zz=[u2['1'][1]-u2['1'][0],u2['1'][1]]
                xx=[u1['1'][1]-u1['1'][0],u1['1'][1]]
                u['1']=add(mul(u1['1'],zz[:]) , add (mul(u2['1'],xx[:]), add(mul(u1['1'],u2['1']), add(mul(u1['a'],u2['A']), mul(u1['A'],u2['a'])))))
                prob.append(u.copy())
            elif op=='^':
                u['a']=add(mul(u1['a'],u2['0']),add(mul(u1['0'],u2['a']),  add(mul(u1['1'],u2['A']),mul(u1['A'],u2['1']))))
                u['A']=add(mul(u1['A'],u2['0']),add(mul(u1['0'],u2['A']), add(mul(u1['1'],u2['a']),mul(u1['a'],u2['1']))))
                u['1']=add(mul(u1['0'],u2['1']) , add(mul(u1['1'],u2['0']) , add(mul(u1['a'],u2['A']),mul(u1['A'],u2['a']))))
                u['0']=add(mul(u1['0'],u2['0']) , add(mul(u1['1'],u2['1']) , add(mul(u1['a'],u2['a']),mul(u1['A'],u2['A']))))
                prob.append(u.copy())
            else:
                print(1/0)  #to check corner case
            st.append('#')
        elif s[i]=='#':
            st.append(s[i])
            prob.append({'1':[1,4],'0':[1,4],'a':[1,4],'A':[1,4]})
        else:
            st.append(s[i])
    u = prob.pop()
    # print(u)
    m = 998244353
    print((u['0'][0]*modInverse(u['0'][1], m))%m, (u['1'][0]*modInverse(u['1'][1], m))%m, (u['a'][0]*modInverse(u['a'][1], m))%m, (u['A'][0] * modInverse(u['A'][1], m))%m)
    t=t-1

