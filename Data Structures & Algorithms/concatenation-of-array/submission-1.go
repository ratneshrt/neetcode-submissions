func getConcatenation(nums []int) []int {
    res := []int{}
    for i:=0;i<len(nums);i++{
        res = append(res, nums[i])
    }

    for i:=0;i<len(nums);i++{
        res = append(res, nums[i])
    }
    return res
}
