func getConcatenation(nums []int) []int {
    n := len(nums)
    res := make([]int, 2*n)

    for i,num := range nums{
        res[i] = num
        res[i+n] = num
    }

    return res 
}
