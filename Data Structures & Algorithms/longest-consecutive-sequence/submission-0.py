class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seen = {}
        mxCnt = 0

        for num in nums:
            seen[num] = True
        
        for num in nums:
            curr = num
            cnt = 1
            while curr + 1 in seen:
                cnt += 1
                curr = curr + 1
            mxCnt = max(mxCnt, cnt)
        
        return mxCnt
