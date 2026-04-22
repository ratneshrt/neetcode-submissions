func isValid(s string) bool {
    stack := []byte{}
    mapping := map[byte]byte{
        ')':'(',
        '}':'{',
        ']': '[',
    }

    for i:=0;i<len(s);i++{
        ch := s[i]
        
        if ch == '(' || ch == '{' || ch == '['{
            stack = append(stack, ch)
        }else {
           if len(stack) == 0 || stack[len(stack)-1] != mapping[ch] {
            return false
           }
           stack = stack[:len(stack)-1]
        }
    }

    return len(stack) == 0
}
