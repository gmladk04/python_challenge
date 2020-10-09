import sys

n = int(sys.stdin.readline())

count=1
i = 666

while count < n :
    i += 1
    st = str(i)
    c = 0
    for s in st:
        c = c+1 if s == '6' else 0
        if c==3:
            count +=1
            break

print(i)