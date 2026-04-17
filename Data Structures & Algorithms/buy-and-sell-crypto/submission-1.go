func maxProfit(prices []int) int {
    maxProf := 0
    for i:=0;i<len(prices);i++{
        for j:=i+1;j<len(prices);j++{
            profit := prices[j] - prices[i]
            if profit > maxProf{
                maxProf = profit
            }
        }
    }

    return maxProf
}
