"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        stored = {}

        def dfs(node):
            if node is None:
                return None
            
            if node in stored:
                return stored[node]
            
            clone = Node(node.val)

            stored[node] = clone 

            for neigh in node.neighbors:
                clone.neighbors.append(dfs(neigh))
            
            return clone
        
        return dfs(node)
