func canFinish(numCourses int, edges [][]int) bool {
	graph := make(map[int][]int)
	indegree := make([]int, numCourses)

	for i:=0; i<numCourses; i++ {
		graph[i] = []int{}
	}

	for _, edge := range edges {
		u := edge[0]
		v := edge[1]

		graph[u] = append(graph[u], v)
		indegree[v]++
	}

	queue := []int{}
	processed := 0

	for i:=0;i<numCourses;i++{
		if indegree[i] == 0 {
			queue = append(queue, i)
		}
	}

	for len(queue) > 0{
		node := queue[0]
		queue = queue[1:]

		processed++

		for _, neigh := range graph[node]{
			indegree[neigh]--

			if indegree[neigh] ==0 {
				queue = append(queue, neigh)
			}
		}
	}

	return processed == numCourses
}
