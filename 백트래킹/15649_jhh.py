n,m=map(int,input().split())
visited=[False]*n #숫자 사용했는지 안했는지
out=[] # 출력 내용

def solution(d,n,m):
    if d==m:
        print(' '.join(map(str,out)))#d==m 경우의 수 끝까지 다 돔
        return
    for i in range(len(visited)):
        if not visited[i]:
            visited[i]=True
            out.append(i+1) #visit 내용 입력
            solution(d+1,n,m) #그다음 순서
            visited[i]=False
            out.pop() # visit 한거 pop 하기

solution(0,n,m)