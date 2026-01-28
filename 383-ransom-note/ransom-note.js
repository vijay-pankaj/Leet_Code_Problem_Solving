/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let count={};
    for(let i=0; i<magazine.length; i++){
        if(count[magazine[i]])count[magazine[i]]++;
        else count[magazine[i]]=1;
    }
    for(let char of ransomNote){
       if(!count[char])return false;
       count[char]--;
    }
    return true;
}