func majorityElement(nums []int) int {
    cnt := 0 
    candidate := 0

    for _, num := range nums{
        if cnt == 0{
            candidate = num
        }

        if candidate == num {
            cnt++
        }else {
            cnt--
        }
    }
    return candidate
}
