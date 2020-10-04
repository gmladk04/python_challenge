import sys

num = int(sys.stdin.readline())

total = 0
add = 1

while True:
    if total+add >= num :
        break
    total += add
    add +=1

num -= total 

if add%2 == 0 :
    print('%d/%d'%(num,add-num+1))
else :
    print('%d/%d'%(add-num+1,num))