func maxProfit(prices []int) int {
    minPrice := int(^uint(0) >> 1)
    maxProf := 0

    for _, price := range prices{
        if price < minPrice{
            minPrice = price
        }else{
            profit := price - minPrice
            if maxProf < profit{
                maxProf = profit
            }
        }
    }

    return maxProf
}
