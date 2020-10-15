import sys

n = int(sys.stdin.readline())
st = []
for i in range(n):
    st.append(sys.stdin.readline())
    
st =list(set(st))
st.sort(key= lambda x : (len(x),x))

for s in st:
    print(s,end='')