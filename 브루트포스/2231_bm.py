n = int(input())

for i in range(n) :
    if sum([int(j) for j in str(i)])+i == n :
        print(i)
        break
    if i == n-1:
        print(0)