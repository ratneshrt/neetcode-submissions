func coinChange(coins []int, amount int) int {
    memo := make(map[int]int)

    var dfs func(int) int
    dfs = func(rem int) int{
        if rem == 0{
            return 0
        }
        if rem < 0{
            return math.MaxInt32
        }
        if val, ok := memo[rem]; ok {
            return val
        }

        minCoin := math.MaxInt32

        for _,coin := range coins {
            res := dfs(rem - coin)
            minCoin = min(1+res, minCoin)
        }

        memo[rem] = minCoin
        return minCoin
    }

    ans := dfs(amount)
    if ans != math.MaxInt32 {
        return ans
    }
    return -1
}
