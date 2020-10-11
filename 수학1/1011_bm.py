import sys

n = int(sys.stdin.readline())

for i in range(n):
    x, y  = map(int,sys.stdin.readline().split())
    d = y-x
    c =0
    add = 1
    i = 1
    
    while c < d :
        c +=add
        if i%2 == 0 :
            add +=1
        i+=1

    print(i-1)