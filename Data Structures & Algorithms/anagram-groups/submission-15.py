class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = {}
        for s in strs:
            key = "".join(sorted(s))

            if key not in seen:
                seen[key] = []
            
            seen[key].append(s)
        
        res = []
        for key,value in seen.items():
            res.append(value)
        
        return res