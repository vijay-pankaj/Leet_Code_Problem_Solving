/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let tempatr="";
    const strarr=s.split(' ')
    for(let i=0; i<strarr.length; i++){
        let str2=strarr[i].split('').reverse().join('');
        if(tempatr.length==0){
            tempatr+=str2
            }else{
                tempatr+=" "+str2;
            }
    }
    return tempatr;
};