def check_n(num):
    if num == 1:
        return False
    for i in range(2,num,1):
        if num % i == 0 :
            return False
    return True

f = int(input())
t = int(input())
final = [n for n in range(f,t+1) if check_n(n)]
if len(final)==0:
    print(-1)
else :     
    print(sum(final))
    print(min(final))