import sys

r, c = map(int,sys.stdin.readline().split())

st=[]
for i in range(r):
    st.append(sys.stdin.readline())

def check_n(a,b):
    start_B =0
    start_W =0

    for i in range(a,a+8):
        for j in range(b,b+8):
            if (i+j)%2 == 0:
                if st[i][j] == 'B':
                    start_W +=1 
                else :
                   start_B += 1
            else :
                if st[i][j] == 'B':
                    start_B +=1 
                else :
                   start_W += 1

    return min(start_B,start_W)

final=[]
for i in range(r-8+1):
    for j in range(c-8+1):
        final.append(check_n(i,j))

print(min(final))