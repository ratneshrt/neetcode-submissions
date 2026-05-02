func maxSubArray(nums []int) int {
    currsum := nums[0]
    maxsum := nums[0]
    n := len(nums)

    for i:=1;i<n;i++{
        if currsum+nums[i] > nums[i]{
            currsum = currsum + nums[i]
        }else{
            currsum = nums[i]
        }
        if currsum > maxsum{
            maxsum = currsum
        }
    }
    return maxsum
}
