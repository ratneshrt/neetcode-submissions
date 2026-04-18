func productExceptSelf(nums []int) []int {
    prod := 1
    ifZero := 0

    for _, num := range nums{
        if num == 0{
            ifZero ++
        }else{
            prod *= num
        }
    }

    res := make([]int, len(nums))
    for i, num := range nums{
        if ifZero > 1{
            res[i] = 0
        }else if ifZero == 1{
            if num == 0{
                res[i] = prod
            }else{
                res[i] = 0
            }
        }else{
            res[i] = prod / num
        }
    }

    return res
}
