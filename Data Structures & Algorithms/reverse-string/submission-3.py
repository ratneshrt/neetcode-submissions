class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        tmp = []
        n = len(s)
        for i in range(n-1, -1,-1):
            tmp.append(s[i])
        
        for i in range(n):
            s[i] = tmp[i]