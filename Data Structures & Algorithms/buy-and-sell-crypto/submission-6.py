class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        minPrice = prices[0]

        for i in range(1, len(prices)):
            if minPrice > prices[i]:
                minPrice = prices[i]
            else:
                profit = prices[i] - minPrice
                if profit > maxProfit:
                    maxProfit = profit
        
        return maxProfit