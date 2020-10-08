def hanoi(n,start,mid,end):
    if n==1:
        print(start,end)
    else:
        hanoi(n-1,start,end,mid)
        print(start,end)
        hanoi(n-1,mid,start,end)
num=int(input())
k=0
for i in range (num):
    k=k*2
    k+=1
print(k)
hanoi(num,1,2,3)