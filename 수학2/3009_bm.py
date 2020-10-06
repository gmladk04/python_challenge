a = []
b = []

x, y = map(int,input().split())

a.append(x)
b.append(y)

for i in range(2):
    m, n = map(int,input().split())
    
    a.remove(m) if m in a else a.append(m)
    b.remove(n) if n in b else b.append(n)
    
print(a[0],b[0])