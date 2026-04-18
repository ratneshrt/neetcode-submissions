func isAnagram(s string, t string) bool {
    if len(s) != len(t){
        return false
    }

    seen := make(map[byte]int)

    for i:=0;i<len(s);i++{
        seen[s[i]]++
    }

    for i:=0;i<len(t);i++{
        if seen[t[i]] == 0{
            return false
        }
        seen[t[i]]--
    }
    return true
}
