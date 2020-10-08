import sys

n = int(sys.stdin.readline())
p = []
for i in range(n):
    a,b = map(int,sys.stdin.readline().split())
    p.append([a,b])
    
rank = [n for i in range(n)]    

for i in range(n-1):
    for j in range(i+1,n):
        if p[i][0]>p[j][0] and p[i][1]>p[j][1]:
            rank[i]-=1
        elif p[i][0]<p[j][0] and p[i][1]<p[j][1]:
            rank[j]-=1
        else :
            rank[i]-=1
            rank[j]-=1

for r in rank:
    print(r,end=' ')