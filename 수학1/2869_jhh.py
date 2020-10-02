#전체 Vm
#Am 올라가고 Bm 미끄러짐
a,b,v=map(int,input().split())
day=0
if(v-b)%(a-b)!=0:
    day=((v-b)//(a-b))+1
else:
    day=((v-b)//(a-b))
print(day)