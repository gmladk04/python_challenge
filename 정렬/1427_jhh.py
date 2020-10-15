n=input()
n=[int(i) for i in n]
nums=sorted(n,reverse=True)
for i in nums:
    print(i,end="")