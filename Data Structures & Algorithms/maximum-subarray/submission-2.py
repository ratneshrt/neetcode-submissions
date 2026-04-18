class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currsum = nums[0]
        maxsum = nums[0]
        n = len(nums)

        for i in range(1, n):
            currsum = max(nums[i], currsum + nums[i])
            maxsum = max(maxsum, currsum)
        
        return maxsum