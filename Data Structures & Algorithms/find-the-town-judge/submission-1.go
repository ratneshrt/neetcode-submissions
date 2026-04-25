func findJudge(n int, trust [][]int) int {
    score := make(map[int]int)

    for i:=1;i<n+1;i++{
        score[i] = 0
    }

    for _,t := range trust{
        a := t[0]
        b := t[1]
        
        score[a] -=1
        score[b] += 1
    }

    for i:=1;i<n+1;i++{
        if score[i] == n-1{
            return i
        }
    }

    return -1
}
