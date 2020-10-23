n,m=map(int,input().split())
arr=range(1,n+1)
visited=[False]*n
out=[False]*m

def solution(d,n,m,l):
    if(d==m):
        print(*out)
        return
    else:
        for i in range(n):
            if(arr[i]>=l):
                visited[i]=True
                l=arr[i]
                out[d]=arr[i]
                solution(d+1,n,m,l)
                visited[i]=False

solution(0,n,m,0)