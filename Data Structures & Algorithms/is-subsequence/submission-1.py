class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        ls = 0
        rs = 0

        n = len(t)
        m = len(s)


        while ls < m and rs < n:
            if s[ls] == t[rs]:
                ls+=1
                rs+=1
            else:
                rs+=1
        
        if ls != m:
            return False
        return True