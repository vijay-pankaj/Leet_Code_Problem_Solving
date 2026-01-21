/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumGap = function(nums) {
    if(nums.length<2)return 0;
    let maxgap=0;
    nums.sort((a,b)=>a-b);
    for(let i=0; i<nums.length; i++){
        let gap=nums[i]-nums[i-1];
        if(gap>maxgap)maxgap=gap;
    }
    return maxgap;
}
