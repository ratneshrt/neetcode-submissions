func isAnagram(s string, t string) bool {
    if len(s) != len(t){
        return false
    }

    words := make(map[byte]int)

    for i:=0;i<len(s);i++{
        words[s[i]]++
    }

    for i:=0;i<len(t);i++{
        if words[t[i]] == 0{
            return false
        }

        words[t[i]]--
    }

    return true
}
