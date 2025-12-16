/**
 * @param {number[]} arr
 * @return {boolean}
 */
var freqcount=function(arr){
    let temp = {};
    for (let i of arr) {
        if (temp[i]) temp[i]++;
        else temp[i] = 1;
    }
    return temp;
}
var uniqueOccurrences = function(arr) {
  const obj=  freqcount(arr);
   let freqSet = new Set();
  for(let i in obj){
    if(freqSet.has(obj[i])){
        return false;
    }else{
        freqSet.add(obj[i]);
    }
  }
  return true;
}