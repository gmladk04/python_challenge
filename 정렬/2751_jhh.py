import sys
n=int(sys.stdin.readline())
l=[]
for _ in range(n):
    l.append(int(sys.stdin.readline()))
l.sort()
print("\n".join(list(map(str, l))))