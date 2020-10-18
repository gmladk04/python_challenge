import sys

n = int(sys.stdin.readline())

count = [0 for i in range(10001)]

for i in range(n):
    a = int(sys.stdin.readline())
    count[a]+=1
    
for i in range(10001):
    if count[i] !=0:
        for j in range(count[i]):
            print(i)