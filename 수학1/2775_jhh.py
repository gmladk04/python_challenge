#a층의 b호에 살려면
#(a-1)층의 1호부터 b호까지 사람들의 수
#아파트 0층 부터 각층에는 1호부터
#0층의 i호에는 i명
###################
#1  4   10  20  35
#1  3   6   10  15
#1  2   3   4   5
###################

n=int(input()) #반복 횟수
for i in range (n):
    a=int(input()) #층
    b=int(input()) #호수
    v=[j for j in range(1,b+1)]
    for _ in range (a):
        for k in range(1,b):
            v[k]+=v[k-1]
    print(v[b-1])

'''
#recursive => 시간 초과#
def cal(a,b):
    if a==0:
        return b #0층 i호일 때 i명
    sum=0
    for i in range(a-1,b+1):
        sum+=cal(a-1,i)
    return sum

n=int(input())
for i in range(n):
    a=int(input())
    b=int(input())
    print(cal(a,b))
'''
