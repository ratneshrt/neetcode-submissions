class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        seen = {}
        n = len(nums)

        for i in range(n):
            if nums[i] in seen:
                seen[nums[i]] += 1
            else: 
                seen[nums[i]] = 1
        
        arr = list(seen.items())
        arr.sort(key=lambda x:x[1], reverse= True)

        res = []
        for i in range(k):
            res.append(arr[i][0])
        
        return res
        