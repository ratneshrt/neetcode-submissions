func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

    for i, num := range nums{
        diff := target - num 

        if idx, ok := m[diff]; ok{
            if idx < i{
                return []int{idx, i}
            }
            return []int{i, idx}
        }

        m[num] = i
    }
    return []int{}
}