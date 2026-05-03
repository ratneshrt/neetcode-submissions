func twoSum(nums []int, target int) []int {
    seen := make(map[int]int)

	for i, num := range nums {
		diff := target - num

		if idx, ok := seen[diff]; ok {
			if idx > i {
				return []int{i, idx}
			}
			return []int{idx,i}
		}

		seen[num] = i
	}
	return []int{}
}
