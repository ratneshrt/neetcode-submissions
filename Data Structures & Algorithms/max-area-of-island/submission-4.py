class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        maxArea = 0
        rows = len(grid)
        cols = len(grid[0])

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    area = self.dfs(grid,rows,cols,i,j)
                    maxArea = max(maxArea, area)
        
        return maxArea
    
    def dfs(self, grid, rows,cols,r,c):
        if r < 0 or r>= rows or c<0 or c>=cols:
            return 0
        
        if grid[r][c] == 0:
            return 0
        
        grid[r][c] = 0

        directions = [
            (0,-1),
            (0,1),
            (1,0),
            (-1,0)
        ]

        trans = 0
        for dr, dc in directions:
            trans += self.dfs(grid, rows, cols,r+dr,c+dc)
        
        return 1 + trans