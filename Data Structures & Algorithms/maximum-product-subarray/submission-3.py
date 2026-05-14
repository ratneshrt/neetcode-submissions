class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        mxProduct = nums[0]

        for i in range(len(nums)):
            curr = nums[i]
            mxProduct = max(mxProduct, curr)
            for j in range(i+1,len(nums)):
                curr *= nums[j]
                mxProduct = max(mxProduct,curr)
        
        return mxProduct