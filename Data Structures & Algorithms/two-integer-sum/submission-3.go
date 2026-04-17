func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

    for i, num := range nums{
        m[num] = i
    }

    for i, num := range nums{
        diff := target - num
        if idx, ok := m[diff]; ok && idx != i{
            return []int{i, idx}
        }
    }

    return []int{}
}