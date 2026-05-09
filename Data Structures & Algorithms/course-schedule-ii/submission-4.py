class Solution:
    def findOrder(self, numCourses: int, edges: List[List[int]]) -> List[int]:
        graph = {}
        indegree = [0] * numCourses

        for i in range(numCourses):
            graph[i] = []
        
        for i in range(len(edges)):
            u = edges[i][1]
            v = edges[i][0]

            graph[u].append(v)
            indegree[v]+=1
        
        queue = []
        res = []
        for i in range(numCourses):
            if indegree[i] == 0:
                queue.append(i)
        
        while len(queue) > 0:
            node = queue.pop(0)
            res.append(node)
            
            for neigh in graph[node]:
                indegree[neigh] -= 1

                if indegree[neigh] == 0:
                    queue.append(neigh)

        if len(res) != numCourses:
            return []

        return res