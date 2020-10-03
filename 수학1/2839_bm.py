n = int(input())

if n%5 == 0:
    print(int(n/5))
else:
    i = 1
    while True :
        if n == 3*i : 
            print(i)
            break
        elif (n-3*i)%5 == 0 : 
            print(i+int((n-3*i)/5))
            break
        elif 3*i > n :
            print(-1)
            break
        i+=1