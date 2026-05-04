func majorityElement(nums []int) int {
    m := make(map[int]int)
    n := len(nums)

    for _, num := range nums{
        m[num]++
    }

    for i, j := range m{
        if j > n/2{
            return i
        }
    }

    return 0
}
