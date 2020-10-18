import sys
import math
from collections import Counter

n = int(sys.stdin.readline())
nums = []

for i in range(n):
    nums.append(int(sys.stdin.readline()))

nums.sort()

ct = Counter(nums)
c = max(ct.values())
a = []
for i in ct.items():
    if i[1]== c:
      a.append(i[0])
a.sort()

print(round(sum(nums)/len(nums)))
print(nums[math.floor(len(nums)/2)])
if len(a)==1:
    print(a[0])
else:
    print(a[1])
print(max(nums)-min(nums))