func islandsAndTreasure(grid [][]int) {
	rows := len(grid)
	cols := len(grid[0])

	queue := [][]int{}
	for i:=0;i<rows;i++{
		for j:=0;j<cols;j++{
			if grid[i][j] == 0{
				queue = append(queue, []int{i,j})
			}
		}
	}

	for len(queue) > 0{
		current := queue[0]
		queue = queue[1:]

		r := current[0]
		c := current[1]

		directions := [][]int{
			{1,0},
			{-1,0},
			{0,-1},
			{0,1},
		}

		for _, dir := range directions {
			newR := r+dir[0]
			newC := c+dir[1]

			for newR>=0 && newR < rows && newC < cols && newC >= 0 && grid[newR][newC] == math.MaxInt32 {
				queue = append(queue, []int{newR, newC})
				grid[newR][newC] = grid[r][c] + 1
			}
		}
	}
}
