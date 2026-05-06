func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

	for i, num := range nums{
		diff := target - num

		if idx, ok := m[diff]; ok{
			if idx > i {
				return []int{i, idx}
			}else{
				return []int{idx,i}
			}
		}
		m[num] = i
	}

	return []int{}
}
