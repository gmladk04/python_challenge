while True:
    s = list(map(int,input().split()))
    if sum(s)==0:
        break
    
    t = max(s)
    s.remove(t)
    
    if t**2 == sum([n**2 for n in s]):
        print('right')
    else :
        print('wrong')