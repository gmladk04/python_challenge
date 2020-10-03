import math

for i in range(int(input())):
    tall , wide, target = map(int,input().split())
    
    room = math.ceil(target/tall)
    
    if target%tall == 0 :
        floor = tall
    else :
        floor = target%tall
    
    print(floor*100+room)