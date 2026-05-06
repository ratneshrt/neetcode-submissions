func maxAreaOfIsland(grid [][]int) int {
	if len(grid) == 0 {
		return 0
	}
	
	maxArea:=0
	rows := len(grid)
	cols := len(grid[0])

	for i:= 0;i<rows;i++{
		for j:=0;j<cols;j++{
			if grid[i][j] == 1{
				ans := dfs(grid,rows,cols,i,j)
				maxArea = max(maxArea, ans)
			}
		}
	}

	return maxArea
}

func dfs(grid [][]int, rows, cols, r, c int) int{
	if r >= rows || r < 0 || c <0 || c >=cols {
		return 0
	}

	if grid[r][c] == 0{
		return 0
	}

	grid[r][c] = 0

	directions := [][]int{
		{0,1},
		{0,-1},
		{1,0},
		{-1,0},
	}

	trans := 0

	for _, dir := range directions{
		trans += dfs(grid, rows, cols, r + dir[0], c + dir[1])
	}

	return 1 + trans
}