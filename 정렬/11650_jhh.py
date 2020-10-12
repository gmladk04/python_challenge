n=int(input())
a=[]
for _ in range(n):
    [x,y]=map(int,input().split())
    a.append([x,y])
a=sorted(a)
for i in range(n):
    print(a[i][0], a[i][1])