import sys

n = int(sys.stdin.readline())

global count

count = 0
answer = []

def hanoi(now,other, dest, num):
    global count

    count +=1
    if num==1:
        answer.append([now,dest])
    else:
        hanoi(now,dest,other,num-1)
        hanoi(now,other,dest,1)
        hanoi(other,now,dest,num-1)

hanoi(1,2,3,n)

print(len(answer))

for n in answer:
    print(n[0],n[1])