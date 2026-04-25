class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows = len(grid)
        cols = len(grid[0])

        island = 0

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == "1":
                    island +=1 
                    self.dfs(grid, i, j, rows, cols)
        
        return island 
    
    def dfs(self, grid, r, c, rows, cols):
        if r < 0 or c < 0 or r >= rows or c >= cols:
            return 
        
        if grid[r][c] == "0":
            return
        
        grid[r][c] = "0"

        directions = [
            (-1, 0),
            (1, 0),
            (0, -1),
            (0, 1)
        ]

        for dr, dc in directions:
            self.dfs(grid, r+dr, c+dc, rows, cols)