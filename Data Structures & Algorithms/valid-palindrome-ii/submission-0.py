class Solution:
    def validPalindrome(self, s: str) -> bool:
        def check(i,j):
            while i < j:
                if s[i] != s[j]:
                    return False
                i,j = i+1, j-1
            return True
        
        n = len(s)
        i, j = 0, n-1
        while i < j:
            if s[i] != s[j]:
                return check(i+1,j) or check(i,j-1)
            i,j = i+1, j-1
        return True