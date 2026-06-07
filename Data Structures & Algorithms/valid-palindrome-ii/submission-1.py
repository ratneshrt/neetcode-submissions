class Solution:
    def validPalindrome(self, s: str) -> bool:
        n = len(s)
        l = 0 
        r = n-1
        while l < r:
            if s[l] != s[r]:
                return self.check(s,l+1,r) or self.check(s,l,r-1)
            l,r = l+1,r-1
        return True
    
    def check(self, s,i,j):
        while i < j:
            if s[i] != s[j]:
                return False
            i,j = i+1, j-1
        return True