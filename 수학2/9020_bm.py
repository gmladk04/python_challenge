import sys

def check_n (n):
    for i in range(2,int(n**(0.5))+1):
        if n%i == 0 :
            return False
    return True

for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    for i in range(int(n/2),1,-1): 
         if check_n(i) and check_n(n-i): 
                print(i,n-i)
                break