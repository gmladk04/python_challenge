import sys

n = int(sys.stdin.readline())
a = []
for i in range(n):
    age, name = sys.stdin.readline().split()
    a.append([int(age),str(name)])
   
a.sort(key = lambda x : x[0])

for i in a :
    print('{} {}'.format(i[0],i[1]))