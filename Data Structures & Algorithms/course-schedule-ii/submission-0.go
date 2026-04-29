func findOrder(numCourses int, prerequisites [][]int) []int {
    graph := make(map[int][]int)
	indegree := make([]int, numCourses)

	for i:=0;i<numCourses;i++{
		graph[i] = []int{}
	}

	for _, edge := range prerequisites {
		u := edge[1]
		v := edge[0]
		
		graph[u] = append(graph[u], v)
		indegree[v]++
	}

	queue := []int{}

	for i:=0;i<numCourses;i++{
		if indegree[i] == 0 {
			queue = append(queue, i)
		}
	}

	processed := 0
	res := []int{}

	for len(queue) > 0{
		node := queue[0]
		res = append(res, node)
		queue = queue[1:]
		processed++

		for _, neigh := range graph[node] {
			indegree[neigh]--

			if indegree[neigh] == 0{
				queue = append(queue, neigh)
			}
		}
	}

	if processed != numCourses{
		return []int{}
	}

	return res
}
