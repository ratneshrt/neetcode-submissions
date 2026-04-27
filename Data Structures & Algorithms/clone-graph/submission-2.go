/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Neighbors []*Node
 * }
 */

func cloneGraph(node *Node) *Node {
    if node == nil {
		return nil
	}

	stored := make(map[*Node]*Node)

	return dfs(node, stored)
}

func dfs(node *Node, stored map[*Node]*Node) *Node {
	if node == nil {
		return nil
	}

	if clone, ok := stored[node]; ok{
		return clone
	}

	clone := &Node{
		Val: node.Val,
		Neighbors: []*Node{},
	}

	stored[node] = clone

	for _, neigh := range node.Neighbors{
		clone.Neighbors = append(clone.Neighbors, dfs(neigh, stored))
	}

	return clone 
}