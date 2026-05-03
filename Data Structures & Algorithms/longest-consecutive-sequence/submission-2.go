func longestConsecutive(nums []int) int {
    seen := make(map[int]bool)
    mxcnt := 0

    for _, num := range nums{
        seen[num] = true
    }

    for _, num := range nums{
        if !seen[num-1]{
            curr := num
            cnt := 1

            for seen[curr+1]{
                cnt += 1
                curr += 1
            }

            mxcnt = max(mxcnt, cnt)
        }
    }
    return mxcnt
}
