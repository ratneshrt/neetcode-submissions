func islandsAndTreasure(grid [][]int) {
    rows := len(grid)
	cols := len(grid[0])

	for i:=0;i<rows;i++{
		for j:=0;j<cols;j++{
			if grid[i][j] == math.MaxInt32{
				dist := bfs(grid,i,j,rows,cols)

				if dist != math.MaxInt32{
					grid[i][j] = dist
				}
			}
		}
	}
}

func bfs(grid [][]int, r, c, rows, cols int)int{
	queue := [][]int{{r,c,0}}
	visited := make(map[[2]int]bool)
	visited[[2]int{r,c}] = true

	for len(queue) > 0{
		current := queue[0]
		queue = queue[1:]

		row := current[0]
		col := current[1]
		dist := current[2]

		if grid[row][col] == 0{
			return dist
		}

		directions := [][]int{
			{1,0},
			{-1,0},
			{0,-1},
			{0,1},
		}

		for _, dir := range directions{
			newR := row+dir[0]
			newC := col+dir[1]

			if newR >= 0 && newR < rows && newC >=0 && newC < cols && !visited[[2]int{newR,newC}] && grid[newR][newC] != -1{
				visited[[2]int{newR,newC}] = true
				queue = append(queue, []int{newR,newC,dist+1})
			}
		}
	}

	return math.MaxInt32
}