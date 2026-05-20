func longestCommonPrefix(strs []string) string {
    prefix := strs[0]

    for i:=0;i<len(strs);i++{
        j :=0 
        for j<len(prefix) && j <len(strs[i]) && strs[i][j] == prefix[j]{
            j+=1
        }
        prefix = prefix[:j]
    }

    return prefix
}