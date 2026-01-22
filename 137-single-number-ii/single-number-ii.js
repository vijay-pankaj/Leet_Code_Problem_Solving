/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let temp={};
    for(let i=0; i<nums.length; i++){
        if(temp[nums[i]])temp[nums[i]]++;
        else temp[nums[i]]=1;
    }
    for(let key in temp){
        if(temp[key]==1)return Number(key);
    }
};