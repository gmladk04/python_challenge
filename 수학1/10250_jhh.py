n=int(input()) #반복 횟수
for i in range (n):
    h,w,g=map(int,input().split()) #h=높이 w=너비 g=guest
    a=g%h #floor
    b=g//h+1 #101 201 ...
    if(a==0):
        a=h
        b-=1
    print(a*100+b)