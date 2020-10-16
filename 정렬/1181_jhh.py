#길이가 짧은 순으로
#길이가 같으면 사전순
n=int(input())
l=[]

for _ in range(n):
    word=str(input())
    count=len(word)
    l.append((word,count))

l=list(set(l)) #중복제거
l.sort(key=lambda word: (word[1],word[0]))

for word in l:
    print(word[0])