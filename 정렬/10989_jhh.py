import sys
n = int(input())
l = [0] * 10001

for i in range(n):
    a = int(sys.stdin.readline())
    l[a] = l[a] + 1

for b in range(len(l)):
    if l[b] !=0:
        for c in range(l[b]):
            print(b)
