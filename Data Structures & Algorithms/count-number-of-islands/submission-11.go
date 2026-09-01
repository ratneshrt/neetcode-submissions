func numIslands(grid [][]byte) int {
	island := 0
	rows := len(grid)
	cols := len(grid[0])

	for i:=0;i<rows;i++{
		for j:=0;j<cols;j++{
			if grid[i][j] == '1'{
				island += 1
				dfs(grid,rows,cols,i,j)
			}
		}
	}

	return island
}

func dfs(grid [][]byte, rows, cols, r, c int){
	if r <0 || r>= rows || c<0 || c>=cols{
		return
	}

	if grid[r][c] == '0'{
		return
	}

	grid[r][c] = '0'

	directions := [][]int{
		{0,1},
		{0,-1},
		{1,0},
		{-1,0},
	}

	for _, dir := range directions {
		dfs(grid, rows, cols, r+dir[0], c+dir[1])
	}
}