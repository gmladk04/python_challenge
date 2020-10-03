for i in range(int(input())):
    k = int(input())
    n = int(input())

    apart = [[0 for i in range(n)] for j in range(k) ]

    for floor in range(k):
        for room in range(1,n+1):
            if floor == 0 :
                apart[floor][room-1] = room
            else : 
                apart[floor][room-1] = sum(apart[floor-1][0:room])

    print(sum(apart[k-1]))