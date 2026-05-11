class Solution:
    def isValid(self, s: str) -> bool:
        mapping = {
            ')':'(',
            ']':'[',
            '}':'{'
        }

        stack = []
        for ch in s:
            if ch == '(' or ch == '{' or ch == '[':
                stack.append(ch)
            else:
                if len(stack) == 0 or stack[-1] != mapping[ch]:
                    return False
                stack = stack[:-1]
        return len(stack) == 0