import sys
 
n = int(sys.stdin.readline())

for i in range(n):
    x1, y1, r1, x2, y2, r2 = map(int,sys.stdin.readline().split())
    d = ((x1-x2)**2+(y1-y2)**2)**0.5
    
    if d == 0 and r1 == r2 : 
        print(-1)
    elif d > r1+r2 or d == 0 or d<abs(r1-r2): 
        print(0)
    elif d == r1+r2 or d==abs(r1-r2) :
        print(1)
    else : 
        print(2)