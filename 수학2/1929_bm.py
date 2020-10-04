import sys
import math 

def isPrime (n):
    if n == 1 :
        return False
    else :
        for i in range(2,int(n**(0.5))+1):
            if n%i == 0 :
                return False
        return True

f , t = map(int,sys.stdin.readline().split())

for n in range(f,t+1) :
    if isPrime(n) : print(n)