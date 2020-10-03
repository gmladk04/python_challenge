'''
def prime(num): #소수 함수 정의
    if num==1: #1은 소수 아님
        return False
    elif num==2: #2는 소수
        return True
    for i in range(2,num): #2부터 num-1까지 소수 찾기
        if num % i ==0:
            return False
    return True
'''
def prime(n):
    if n==1: return False
    for i in range(2,n):
        if n%i==0: return False
    return True

a=int(input())
b=int(input())
d=[i for i in range(a,b+1) if prime(i)]
if len(d)==0: #소수가 아무것도 없을 경우
    print(-1)
else:
    print(sum(d)) #소수의 합
    print(min(d)) #최소 값