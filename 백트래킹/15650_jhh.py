n,m=map(int,input().split())
visited=[False]*n
out=[]
all=[]
def solution(d,n,m):
    if d==m:
      out_str=' '.join(map(str,sorted(out)))
      if out_str not in all:
          all.append(out_str)
      return
    for i in range(n):
        if not visited[i]:
            visited[i]=True
            out.append(i+1)
            solution(d+1,n,m)
            visited[i]=False
            out.pop()

solution(0,n,m)
for i in all:
    print(i)