class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = {}
        mp[0] = 1
        cnt = 0
        prefix = 0

        for num in nums:
            prefix += num
            if prefix -k in mp:
                cnt += mp[prefix - k]
            if prefix in mp:
                mp[prefix] += 1
            else:
                mp[prefix] = 1
        
        return cnt 