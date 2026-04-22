class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        memo = {}

        def dfs(rem):
            if rem == 0:
                return 0
            if rem < 0:
                return float('inf')

            if rem in memo:
                return memo[rem]
            
            minCoin = float('inf')

            for coin in coins:
                res = dfs(rem - coin)
                minCoin = min(minCoin, 1+res)
            
            memo[rem] = minCoin
            return minCoin
        
        ans = dfs(amount)
        return ans if ans != float('inf') else -1