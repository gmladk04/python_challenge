import sys

n, m = map(int,sys.stdin.readline().split())
nums = [True for _ in range(n)]
output = [0 for _ in range(m)]

def b_tracking(now):
    if now == m :
        print(' '.join(map(str,output)))
    else:
        for i in range(n):
            if nums[i] :
                nums[i] = False
                output[now]=i+1
                b_tracking(now+1)
                nums[i] = True
  
b_tracking(0)