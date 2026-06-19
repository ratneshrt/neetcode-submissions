class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = strs[0]
        n = len(strs)
        for i in range(n):
            j = 0
            while(j < len(prefix) and j < len(strs[i]) and prefix[j] == strs[i][j]):
                j += 1
            
            prefix = prefix[:j]
        
        return prefix 