class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr = nums[0]
        maxsum = nums[0]

        for i in range(1,len(nums)):
            if curr + nums[i] > nums[i]:
                curr = curr + nums[i]
            else:
                curr = nums[i]
            maxsum = max(maxsum, curr)
        
        return maxsum