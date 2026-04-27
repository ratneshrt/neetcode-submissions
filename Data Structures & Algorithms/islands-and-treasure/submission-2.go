func islandsAndTreasure(grid [][]int) {
    rows:= len(grid)
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

		row := current[0]
		col := current[1]

		directions := [][]int{
			{0,-1},
			{0,1},
			{1,0},
			{-1,0},
		}

		for _, dir := range directions{
			newR := row + dir[0]
			newC := col + dir[1]

			if newR >= 0 && newC >= 0 && newR < rows && newC < cols && grid[newR][newC] == math.MaxInt32{
				queue = append(queue, []int{newR, newC})
				grid[newR][newC] = grid[row][col] + 1

			}
		}
	}
}
