n=int(input())
a_list=[]
for i in range(n):
    a=int(input())
    a_list.append(a)
a_list.sort()
for i in a_list:
    print(i)