#k광년 이동하면 k-1, k, k+1광년만 다시 이동 할 수 있음
#-1, 0, 1 => 이론 상 1 만 가능
#그 이후에는 (0,1,2) (1,2,3) ... 가능
#x지점에서 y지점 이동거리 반드시 1광년
#최소한의 작동 횟수
#n*m+1 거리부터 작동횟수= n+m

import math
n=int(input()) #반복 횟수
for _ in range(n):
    x,y=map(int,input().split()) #x부터 y까지
    if y-x<=3:
        print(y-x)
    else:
        result=int(math.sqrt(y-x)) #제곱근 기준으로 나눔
        if (y-x)==result**2:
            print(2*result-1)
        elif result**2<(y-x)<=result**2+result:
            print(2*result)
        else:
            print(2*result+1)