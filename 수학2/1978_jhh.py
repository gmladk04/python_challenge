n=int(input())
a=list(map(int,input().split()))
def prime(num): #소수 함수 정의
    if num==1: #1은 소수 아님
        return False
    elif num==2: #2는 소수
        return True
    for i in range(2,num): #2부터 num-1까지 소수 찾기
        if num % i ==0:
            return False
    return True
count=0
for i in a:
    if prime(i):
        count+=1
print(count)