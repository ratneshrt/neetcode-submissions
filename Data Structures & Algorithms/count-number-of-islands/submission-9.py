class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        cnt = 0
        rows = len(grid)
        cols = len(grid[0])

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == "1":
                    cnt +=1
                    self.dfs(grid,rows,cols,i,j)
        
        return cnt
    
    def dfs(self, grid,rows,cols,r,c):
        if r<0 or r >=rows or c<0 or c>=cols:
            return
        
        if grid[r][c] == "0":
            return 
        
        grid[r][c] = "0"

        directions = [
            (0,-1),
            (0,1),
            (1,0),
            (-1,0)
        ]

        for dr, dc in directions:
            self.dfs(grid,rows,cols,r+dr,c+dc)