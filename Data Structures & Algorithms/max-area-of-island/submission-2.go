func maxAreaOfIsland(grid [][]int) int {
	if len(grid) == 0{
		return 0
	}
	
	maxArea := 0
	rows := len(grid)
	cols := len(grid[0])

	for i:=0;i<rows;i++{
		for j:=0;j<cols;j++{
			if grid[i][j] == 1{
				area := dfs(grid, i, j, rows,cols)
				maxArea = max(maxArea, area)
			}
		}
	}

	return maxArea
}

func dfs(grid [][]int, r,c,rows,cols int) int {
	if r < 0 || r >= rows || c < 0 || c >= cols {
		return 0
	}

	if grid[r][c] == 0{
		return 0
	}

	grid[r][c] = 0

	directions := [][]int{
		{1,0},
		{-1,0},
		{0,-1},
		{0,1},
	}

	trans := 0

	for _, dir := range directions {
		dr := dir[0]
		dc := dir[1]

		trans += dfs(grid, r+dr, c+dc, rows, cols)
	}

	return 1 + trans
}