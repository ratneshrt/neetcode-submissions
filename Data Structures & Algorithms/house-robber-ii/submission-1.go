func robrange(nums []int, start, end int) int {
    prev1, prev2 := 0, 0

    for i:=start; i<end; i++ {
        curr := max(prev1, nums[i] + prev2)
        prev2 = prev1
        prev1 = curr
    }

    return prev1
}

func rob(nums []int) int {
    n := len(nums)

    if n == 1 {
        return nums[0]
    }

    return max(robrange(nums,0,n-1), robrange(nums, 1, n))
}