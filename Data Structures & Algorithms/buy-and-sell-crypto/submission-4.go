func maxProfit(prices []int) int {
	maxProfit := 0
	minPrice := math.MaxInt32

	for _, price := range prices {
		if minPrice > price{
			minPrice = price
		}else{
			profit := price - minPrice

			if profit > maxProfit{
				maxProfit = profit
			}
		}
	}

	return maxProfit
}
