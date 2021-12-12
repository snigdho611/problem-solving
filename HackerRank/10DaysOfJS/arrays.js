

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    
    let max = 0;
    let secondMax = 0;
    for(let i=0;i<nums.length;i++){
        if(nums[i] > max){
            max = nums[i]
        }
    }
    
    for(let j=0;j<nums.length;j++){
        if(nums[j] > secondMax){
            if(nums[j] == max){
                //
            }
            else{
                secondMax = nums[j]
            }
        }
    }
    
    return secondMax
}


let arr = [1,2,3,4,5,5,6] //Enter your value here
console.log(getSecondLargest(arr))