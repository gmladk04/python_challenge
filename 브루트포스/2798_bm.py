import sys

n, m = map(int, sys.stdin.readline().split())

nums = list(map(int, sys.stdin.readline().split()))
min = m

for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            sum = nums[i]+nums[j]+nums[k]
            if sum <=m and m-sum<min:
                min = m-sum
                a = sum 
print(a)