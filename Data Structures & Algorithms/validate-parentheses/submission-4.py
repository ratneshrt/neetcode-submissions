class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {
            ')' : '(',
            ']': '[',
            '}': '{'
        }

        for ch in s:
            if ch == '(' or ch == '{' or ch == '[':
                stack.append(ch)
            
            else:
                if not stack or stack[-1] != mapping[ch]:
                    return False
                stack.pop()
        
        return len(stack) == 0