class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        cnt = 0

        for i in range(len(s)-1,-1,-1):
            if s[i] != " ":
                cnt +=1
            elif cnt >0 and s[i] == " ":
                break
        
        return cnt 