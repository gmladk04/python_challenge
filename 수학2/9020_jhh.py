#n이하의 숫자들 중 소수 찾기
def prime(n):
    a=[True]*n
    m=int(n**0.5)
    for i in range(2,m+1):
        if a[i]==True:
            for j in range(i*i,n,i):
                a[j]=False
    return [i for i in range(2,n) if a[i] == True]

def find(n):
    l=prime(n)
    index=max([i for i in range(len(l)) if l[i]<=n/2])
    for i in range(index,-1,-1):
        for j in range(i, len(l)):
            if l[i]+l[j]==n:
                return [l[i],l[j]]

for _ in range(int(input())):
    n=int(input())
    print(" ".join(map(str,find(n))))