class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod = 1
        ifZero = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                ifZero = ifZero + 1
                continue
            else:
                prod = prod * nums[i]
        
        res = []
        for i in range(len(nums)):
            if ifZero > 1:
                res.append(0)
            elif ifZero == 1:
                if nums[i] != 0:
                    res.append(0)
                else:
                    res.append(prod)
            else:
                res.append(prod//nums[i])
        
        return res