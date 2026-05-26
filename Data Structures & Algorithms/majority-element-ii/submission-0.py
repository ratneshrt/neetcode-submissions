class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        seen = {}

        for num in nums:
            if num in seen:
                seen[num] += 1
            else:
                seen[num] = 1
        
        res= []
        for ele in seen:
            if seen[ele] > n/3:
                res.append(ele)
        
        return res 