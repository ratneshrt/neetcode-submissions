func maxSubArray(nums []int) int {
    currSum := nums[0]
	maxSum := nums[0]
	n := len(nums)

	for i:=1;i<n;i++{
		if currSum + nums[i] > nums[i] {
			currSum = currSum + nums[i]
		}else{
			currSum = nums[i]
		}
		if currSum > maxSum{
			maxSum = currSum
		}
	}

	return maxSum
}
