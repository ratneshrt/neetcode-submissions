func numIslands(grid [][]byte) int {
    if len(grid) == 0{
        return 0
    }

    rows := len(grid)
    cols := len(grid[0])

    island := 0

    for i:=0;i<rows;i++{
        for j:=0;j<cols;j++{
            if grid[i][j] == '1'{
                island += 1
                dfs(grid, i, j, rows,cols)
            }
        }
    }
    return island
}

func dfs(grid [][]byte, r, c, rows, cols int) {
    if r < 0 || c < 0 || r >= rows || c >= cols {
        return
    }
    
    if grid[r][c] == '0' {
        return 
    }

    grid[r][c] = '0'

    directions := [][]int{
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1},
    }

    for _, dir := range directions{
        dr := dir[0]
        dc := dir[1]
        dfs(grid, r+dr, c+dc, rows, cols)
    }
}