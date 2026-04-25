class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        if not grid:
            return 0
        
        maxArea = 0
        island = 0

        rows = len(grid)
        cols = len(grid[0])

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    area = self.dfs(grid, i, j, rows, cols)
                    maxArea = max(maxArea, area)

        return maxArea
        
        
    def dfs(self, grid, r, c, rows, cols):
        if r < 0 or c < 0 or r>= rows or c>= cols:
            return 0
        
        if grid[r][c] == 0:
            return 0

        grid[r][c] = 0
        
        directions = [
            (-1,0),
            (1,0),
            (0,-1),
            (0,1)
        ]

        trans = 0

        for dr,dc in directions:
            trans += self.dfs(grid, r+dr, c+dc, rows, cols)
        
        return 1 + trans