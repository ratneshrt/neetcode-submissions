func climbStairs(n int) int {
    if n<=2 {
		return n
	}

	prev1 := 2
	prev2 := 1

	for i:=3;i<n+1;i++{
		curr := prev1 + prev2
		prev2 = prev1
		prev1 = curr
	}

	return prev1
}
