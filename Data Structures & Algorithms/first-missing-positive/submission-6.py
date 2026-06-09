class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        if len(nums) == 1:
            if nums[0] < 0:
                return 1
            else:
                if nums[0] == 1:
                    return nums[0]+1
                else: 
                    return 1

        seen = set()
        n = len(nums)
        for i in range(n):
            seen.add(nums[i])
        
        for i in range(1,n+1):
            if i not in seen:
                return i
        
        return max(nums) + 1