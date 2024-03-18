var reduce = function(nums, fn, init) {
    let total = init;

    for (let i = 0; i < nums.length; i++) {
        total = fn(total, nums[i]);
    }

    return total;
};

const sum = (accum, curr) => {
    return accum + curr;
};

const result = reduce([1,2,3,4], sum, 0)
console.log(result)