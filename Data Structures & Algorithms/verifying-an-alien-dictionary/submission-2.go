func isAlienSorted(words []string, order string) bool {
    rank := make(map[byte]int)

    for i:=0;i<len(order);i++{
        rank[order[i]] = i
    }

    for i:=0;i<len(words)-1;i++{
        word1 := words[i]
        word2 := words[i+1]

        foundDiff := true

        for j:=0;j<min(len(word1), len(word2));j++ {
            if word1[j] != word2[j]{
                if rank[word1[j]] > rank[word2[j]]{
                    return false
                }
                foundDiff = false
                break
            }
        }

        if foundDiff && len(word1) > len(word2){
            return false 
        }
        
    }
    return true
}
