func findOrder(numCourses int, edges [][]int) []int {
	graph := make(map[int][]int)
	indegree := make([]int, numCourses)

	for i:=0;i<numCourses;i++{
		graph[i] = []int{}
	}

	for _, edge := range edges {
		u := edge[1]
		v := edge[0]

		graph[u] = append(graph[u], v)
		indegree[v]++
	}

	queue := []int{}

	for i:=0;i<numCourses;i++{
		if indegree[i] == 0{
			queue = append(queue, i)
		}
	}

	res := []int{}

	for len(queue) > 0{
		node := queue[0]
		res = append(res, node)
		queue = queue[1:]

		for _, neigh := range graph[node] {
			indegree[neigh]--

			if indegree[neigh] == 0 {
				queue = append(queue, neigh)
			}
		}
	}

	if len(res) != numCourses {
		return []int{}
	}

	return res 
}
