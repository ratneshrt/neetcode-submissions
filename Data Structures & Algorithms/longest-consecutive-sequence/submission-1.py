class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seen = set(nums)
        mxcnt = 0

        for num in nums:
            seen.add(num)
        
        for num in nums:
            if num - 1 not in seen:
                curr = num
                cnt = 1

                while curr +1 in seen:
                    cnt += 1
                    curr += 1
                
                mxcnt = max(mxcnt, cnt)
        
        return mxcnt