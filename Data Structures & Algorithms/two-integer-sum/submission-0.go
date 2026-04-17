func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

    for i, num := range nums {
        complement := target - num

        if idx, found := m[complement]; found {
            if idx < i {
                return []int{idx, i}
            }
            return []int{i, idx}
        }

        m[num] = i
    }

    return []int{}
}
