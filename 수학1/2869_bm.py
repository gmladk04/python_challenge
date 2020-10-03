import math

a, b, c = map(int,input().split())
print(math.ceil((c-a)/(a-b))+1)