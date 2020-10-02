a,b,c=list(map(int,input().split()))
BREAK_EVEN_POINT=0

if(c<=b):
    BREAK_EVEN_POINT=-1
else:
    BREAK_EVEN_POINT=a//(c-b)+1
print(BREAK_EVEN_POINT)
