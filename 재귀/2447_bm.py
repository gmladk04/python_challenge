import sys

n = int(sys.stdin.readline())

out = [[' ' for i in range(n)] for j in range(n) ]

def print_star(arr, r, c):
    for i in range(3):
        for j in range(3):
            arr[r+i][c+j]='*'
    arr[r+1][c+1]=' '
    
def go_around(arr,r,c,size):
    if size == 3:
       print_star(arr,r,c)
    else:
        gap = int(size/3)
        for i in range(0,size,gap):
            for j in range(0,size,gap):
                if i==gap and j==gap: continue
                else: go_around(arr,r+i,c+j,gap)

go_around(out,0,0,n)

for i in range(n):
    for j in range(n):
        print(out[i][j],end='')
    print()