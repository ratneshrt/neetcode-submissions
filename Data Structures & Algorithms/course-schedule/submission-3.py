class Solution:
    def canFinish(self, numCourses: int, edges: List[List[int]]) -> bool:
        # topological sort bfs

        # first map and indegree
        graph = {}
        indegree = [0] * numCourses

        # allocate graph space
        for i in range(numCourses):
            graph[i] = []

        # make whose dependencies on who
        for i in range(len(edges)):
            u = edges[i][0] # depend on
            v = edges[i][1] # prerequist

            graph[u].append(v)
            indegree[v]+=1

        queue = []
        processed = 0

        # whose indegree is already 0 means no prequist
        for i in range(numCourses):
            if indegree[i] == 0:
                queue.append(i)

        while len(queue) > 0:
            node = queue.pop(0)
            processed += 1

            for neigh in graph[node]:
                indegree[neigh] -= 1

                if indegree[neigh] ==0:
                    queue.append(neigh)
        
        return numCourses == processed
