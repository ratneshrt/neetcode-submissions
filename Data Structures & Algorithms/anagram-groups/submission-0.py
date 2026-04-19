class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = []
        visited = [False] * len(strs)

        for i in range(len(strs)):
            if visited[i]:
                continue
            
            group = [strs[i]]
            visited[i] = True

            for j in range(i+1,len(strs)):
                if not visited[j]:
                    if sorted(strs[i]) == sorted(strs[j]):
                        group.append(strs[j])
                        visited[j] = True

            res.append(group)
        return res