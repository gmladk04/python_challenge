def f(num):
    if num<=1: return 1
    else:
        return num*f(num-1)
num=int(input())
print(f(num))