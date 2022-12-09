def solve(nums):
   total=0
   idx=0
   l=[i for i in range(len(nums)+1) if i%2!=0]

   while(idx<len(l)):
      k=l[idx]
      for i in range(len(nums)):
         if i+k < len(nums)+1:
            total+=sum(nums[i:i+k])
      idx+=1
   return total

nums = [3,8,2,5,7]
print(solve(nums))