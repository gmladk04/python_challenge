import sys

n = int(sys.stdin.readline())
nums =[]

for i in range(n):
    a = int(sys.stdin.readline())
    if a == 0 :
        nums.pop()
    else:
        nums.append(a)

print(sum(nums))