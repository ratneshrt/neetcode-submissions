class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        seen = {}
        n = len(s)
        if n != len(t):
            return False
        
        for i in range(n):
            if s[i] not in seen:
                seen[s[i]] = 1
            else: 
                seen[s[i]] += 1
        
        for i in range(n):
            if t[i] not in seen or seen[t[i]] == 0:
                return False
            seen[t[i]] -= 1
        
        return True