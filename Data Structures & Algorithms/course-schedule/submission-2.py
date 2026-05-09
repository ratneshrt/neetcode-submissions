class Solution:
    def canFinish(self, numCourses: int, edges: List[List[int]]) -> bool:
        graph = {}
        indegree = [0] * numCourses

        for i in range(numCourses):
            graph[i] = []
        
        for i in range(len(edges)):
            u = edges[i][0]
            v = edges[i][1]

            graph[u].append(v)
            indegree[v] += 1
        
        queue = []
        processed = 0
        for i in range(numCourses):
            if indegree[i] == 0:
                queue.append(i)
        
        while len(queue) >0:
            node = queue.pop(0)
            processed += 1

            for neigh in graph[node]:
                indegree[neigh] -= 1

                if indegree[neigh] ==0:
                    queue.append(neigh)
        
        return processed == numCourses