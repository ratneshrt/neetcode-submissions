func rob(nums []int) int {
	   prev1 := 0
       prev2 := 0

       for _, num := range nums{
        curr := max(prev2+num, prev1)
        prev2 = prev1
        prev1 = curr
       }

       return prev1
}
