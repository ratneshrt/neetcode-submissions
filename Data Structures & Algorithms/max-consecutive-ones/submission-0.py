class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxCnt = 0
        cnt = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                cnt += 1
            else:
                cnt = 0
            maxCnt = max(cnt, maxCnt)
        return maxCnt