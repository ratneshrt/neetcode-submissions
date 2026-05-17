class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        ls = 0
        rs = 0
        n = len(s)
        m = len(t)

        while ls < n and rs < m:
            if s[ls] == t[rs]:
                ls += 1
                rs += 1
            else:
                ls += 1
        
        return m-rs