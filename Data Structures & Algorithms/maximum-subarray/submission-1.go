func maxSubArray(nums []int) int {
    n := len(nums)
    larSum := -int(^uint(0) >> 1) - 1

    for i:=0;i<n;i++{
        currsum := 0
        for j:=i;j<n;j++{
            currsum += nums[j]
            if currsum > larSum{
                larSum = currsum
            }
        }
    }
    return larSum 
}
