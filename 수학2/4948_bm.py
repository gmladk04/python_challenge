import sys

def check_n(k):
    for j in range(2,int(k**(0.5))+1):
        if  k%j==0:
            return False
    return True


ps = [i for i in range(2,2*123456+1) if check_n(i)]

while True :
    n = int(sys.stdin.readline())

    if n == 0:
        break

    print(len([i for i in ps if n<i<=2*n]))