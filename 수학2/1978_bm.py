def check_n(num):
    if num == 1:
        return False
    for i in range(2,num,1):
        if num % i == 0 :
            return False
    return True

n = int(input())
nums = list(map(int,input().split()))
final = [1 for ns in nums if check_n(ns)]
print(sum(final))