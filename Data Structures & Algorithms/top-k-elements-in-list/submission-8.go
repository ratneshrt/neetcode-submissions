func topKFrequent(nums []int, k int) []int {
	freq := make(map[int]int)
	n := len(nums)

	for _, num := range nums{
		freq[num]++
	}

	buckets := make([][]int, n+1)
	for num, f := range freq{
		buckets[f] = append(buckets[f], num) 
	}

	res := []int{}

	for i:=n;i>=0;i--{
		for _, num := range buckets[i]{
			res = append(res,num)
			if len(res) == k {
				return res
			}
		}
	}

	return res
}