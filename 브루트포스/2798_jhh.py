#모든 경우 다 탐색
n,m=list(map(int,input().split()))
card=list(map(int,input().split()))
result=0
sum=0
for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1,n):
            temp= card[i]+card[j]+card[k]
            if temp<=m and temp>sum: #합 m을 넘지 않는 && 최대
                sum=temp
print(sum)