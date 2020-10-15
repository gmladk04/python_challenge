import sys

n = int(sys.stdin.readline())
nums = []
for i in range(n):
    x ,y = map(int,sys.stdin.readline().split())
    nums.append([x,y])
    
nums.sort(key = lambda x : (x[1],x[0]))

for i in nums :
    print('{} {}'.format(i[0],i[1]))