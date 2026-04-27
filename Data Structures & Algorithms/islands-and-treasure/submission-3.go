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
			{0,1},
			{0,-1},
			{1,0},
			{-1,0},
		}

		for _, dir := range directions{
			newR := r + dir[0]
			newC := c + dir[1]

			if newR >= 0 && newR < rows && newC >= 0 && newC < cols && grid[newR][newC] == math.MaxInt32 {
				grid[newR][newC] = grid[r][c] + 1
				queue = append(queue, []int{newR, newC})
			}
		}
	}
}
