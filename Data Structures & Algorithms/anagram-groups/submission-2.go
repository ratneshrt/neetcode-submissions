func groupAnagrams(strs []string) [][]string {
    seen := make(map[string][]string)

    for _, s := range strs{
        arr := []byte(s)
        sort.Slice(arr, func(i,j int)bool{
            return arr[i] < arr[j]
        })

        key := string(arr)
        seen[key] = append(seen[key], s)
    }

    res := [][]string{}
    for _, group := range seen{
        res = append(res, group)
    }

    return res 
}
