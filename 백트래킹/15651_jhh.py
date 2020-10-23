n, m = map(int, input().split())
arr = range(1 , n +1)
visited = [False ] *n
res = [False] * m
def solution(d,n,m):
    if(d == m):
        print(*res)
        return
    else:
        for i in range(n):
            visited[i] = True
            res[d] = arr[i]
            solution(d+1,n,m)
            visited[i] = False
solution(0,n,m)