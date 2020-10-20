import sys

n, m = map(int,sys.stdin.readline().split())
output = [0 for _ in range(m)]

def b_tracking(now):
    if now == m :
        print(' '.join(map(str,output)))
    else:
        for i in range(0,n):
            output[now]=i+1
            b_tracking(now+1)

b_tracking(0)