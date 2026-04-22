func rob(nums []int) int {
    prev1 := 0
    prev2 := 0

    for _, num := range nums {
        curr := max(prev1, num + prev2)
        prev2 = prev1
        prev1 = curr
    }

    return prev1
}
