n=int(input())
bag=0
while n>=0:
    if n%5==0:
        bag+=(n//5) #5의 배수이면
        print(bag)
        break
    n-=3
    bag+=1 #5의 배수가 될 때까지 설탕 -3 봉지+1
else:
    print(-1)