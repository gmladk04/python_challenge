#n보다 크고 2n보다 작거나 같은 소수는 적어도 하나 존재
#n보다 크고 2n 보다 작거나 같은 소수의 개수

import math

def prime(num):
    if num==1: return False
    for k in range(2,int(math.sqrt(num))+1):
        if num%k==0: return False
    return True

li=list(range(2,123456*2))
prime_li=[]
for i in li:
    if prime(i):
        prime_li.append(i)
while(1):
    count=0
    n=int(input())
    if n==0: break

    for i in prime_li:
        if n<i<=n*2:
            count+=1
    print(count)
'''
import math
import sys
def prime(num):
    if num==1: return False
    for k in range(2,int(math.sqrt(num))+1):
        if num%k==0:return False
    return True

n= int(sys.stdin.readline())
while n!=0:
    count = 0
    for k in range (n+1,2*n+1):
        if prime(k)==True:
            count+=1
    print(count)
    n = int(sys.stdin.readline())
'''
