function PalindromeCheck (word){
    let check = word.split("");
    for(let i = 0; i <= Math.round(word.length); i++){
        if(check[i] != check[word.length -1 -i]){
            return false;
        }
    }
    return true;
}
console.log(PalindromeCheck("embrasser"));