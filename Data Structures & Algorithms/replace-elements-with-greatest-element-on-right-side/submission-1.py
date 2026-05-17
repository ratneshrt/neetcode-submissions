class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)

        for i in range(n-1):
            currMax = self.maxofarr(arr,i, n)
            arr[i] = currMax
        
        arr[n-1] = -1
        
        return arr
    
    def maxofarr(self, arr, i, n):
        maxi = 0
        for i in range(i+1,n):
            if arr[i] > maxi:
                maxi = arr[i]
        return maxi 
