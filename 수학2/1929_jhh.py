#m 이상 n 이하
import math

def prime(num):
    if num==1: return False
    n= int(math.sqrt(num))
    for k in range(2, n+1):
        if num%k==0: return False
    return True

m,n=map(int,input().split())
for k in range(m,n+1):
    if prime(k): print(k)