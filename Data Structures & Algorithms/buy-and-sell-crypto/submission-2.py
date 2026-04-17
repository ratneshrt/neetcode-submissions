class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = float('inf')
        maxProf = 0
        for price in prices:
            if price < minPrice:
                minPrice = price
            else:
                profit = price - minPrice
                if profit > maxProf:
                    maxProf = profit 
        
        return maxProf