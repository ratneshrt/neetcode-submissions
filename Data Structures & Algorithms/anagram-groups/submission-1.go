func groupAnagrams(strs []string) [][]string {
    n := len(strs)
    res := [][]string{}
    visited := make([]bool, n)

    for i:=0;i<n;i++{
        if visited[i]{
            continue
        }

        group := []string{strs[i]}
        visited[i] = true

        for j:=i+1;j<n;j++{
            if !visited[j] && isAnagram(strs[i], strs[j]){
                group = append(group, strs[j])
                visited[j] = true
            }
        }
        res = append(res, group)
    }
    return res
}

func isAnagram(s string, t string) bool {
    if len(s) != len(t){
        return false 
    }

    sArr := []byte(s)
    tArr := []byte(t)

    sort.Slice(sArr, func(i, j int) bool { return sArr[i] < sArr[j] })
    sort.Slice(tArr, func(i,j int) bool { return tArr[i] < tArr[j]})

    for i := range sArr{
        if sArr[i] != tArr[i]{
            return false
        }
    }

    return true
}
