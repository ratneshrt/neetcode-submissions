class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        larSum = float('-inf')
        n = len(nums)
        for i in range(n):
            currsum = 0
            for j in range(i, n):
                currsum += nums[j]
                if currsum > larSum:
                    larSum = currsum
        
        return larSum 