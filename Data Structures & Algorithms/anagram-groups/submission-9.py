class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = {}
        for s in strs:
            arr = list(s)
            arr.sort()

            key = "".join(arr)

            if key not in seen:
                seen[key] = []

            seen[key].append(s)
        
        res = []
        for group in seen.values():
            res.append(group)
        
        return res 