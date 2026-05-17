class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        prev = 0
        cnt = 0

        for i in range(len(s)):
            if s[i] == " ":
                cnt = 0
                continue
            else:
                cnt+=1
                prev = cnt
        
        return prev