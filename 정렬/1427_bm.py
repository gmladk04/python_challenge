import sys

n = sys.stdin.readline()

a= list(reversed(sorted(map(int,n[0:-1]))))

print(''.join(map(str,a)))