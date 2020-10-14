import sys

n = int(sys.stdin.readline())
nums = []
for i in range(n):
    nums.append(int(sys.stdin.readline()))
    
for i in range(len(nums)):
    for j in range(0,len(nums)-i-1):
        if nums[j]>nums[j+1]:
            nums[j],nums[j+1] = nums[j+1],nums[j]

for n in nums:
    print(n)
