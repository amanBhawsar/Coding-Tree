t=int(input())
while(t>0):
	inp=input()
	ranges=[]
	flag=0
	for i in range(len(inp)):
		if(inp[i]!='.'):
			ranges.append([i+1-int(inp[i]),i+1+int(inp[i])])
	for i in range(len(ranges)):
		for j in range(len(ranges)):
			if(i!=j):
				if((ranges[i][1]>=ranges[j][0] and ranges[i][1]<=ranges[j][1]) or (ranges[i][0]>=ranges[j][0] and ranges[i][0]<=ranges[j][1]) or (ranges[i][0]<=ranges[j][0] and ranges[i][1]>=ranges[j][1])):
					flag=1
					break
		if(flag==1):
			break
	if(flag==0):
		print('safe')
	else:
		print('unsafe')
	t-=1
