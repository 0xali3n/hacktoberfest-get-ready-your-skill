const reverseString = (str) => {
    let res = ''
    for (let i = str.length-1; i >= 0; i--) {
        res += str[i]
    }
    return res
}