func rob(nums []int) int {
    n := len(nums)
    
    if n == 1{
        return nums[0]
    }

    prev1 := 0
    prev2 := 0
    for i:=0;i<n-1;i++ {
        curr := max(prev1, nums[i] + prev2)
        prev2 = prev1
        prev1 = curr
    }

    prev11 := 0
    prev22 := 0
    for i:=1;i<n;i++{
        curr1 := max(prev11, nums[i] + prev22)
        prev22 = prev11
        prev11 = curr1
    }

    ans := max(prev1, prev11)

    return ans 
}
