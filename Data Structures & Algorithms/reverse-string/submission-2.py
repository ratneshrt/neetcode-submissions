class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        n = len(s)
        left = 0
        right = n -1
        if n == 2:
            s[0], s[-1] = s[-1], s[0]
        if (n%2 == 0 and n != 2):

            while left < n or right >=0:
                s[left], s[right] = s[right], s[left]
                left += 1
                right -=1
                if left + 1 == right:
                    s[left], s[right] = s[right], s[left]
                    break
        else:
            while left < n or right >=0:
                s[left], s[right] = s[right], s[left]
                left += 1
                right -=1
                if left == right:
                    break
        