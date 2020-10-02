#stage 값이 홀수/짝수일 때 규칙이 다르다
#1. stage 값이 홀수일 때: 분자는 1부터 증가, 분모는 stage 값으로 부터 감소
#2. stage 값이 짝수일 때: 분자는 stage 값으로부터, 분모는 stage 1부터 증가

n=int(input())
stage,key_x=1,1 #1/1에서 시작
while key_x+stage<=n:
    key_x+=stage
    stage+=1
step=n-key_x
x,y=step+1,stage-step
if stage % 2 == 0:
    print('{}/{}'.format(x, y))
else:
    print('{}/{}'.format(y, x))