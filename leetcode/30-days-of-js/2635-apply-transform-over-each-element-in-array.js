/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const temp = []

    for (let i = 0; i < arr.length; i++) {
        temp.push(fn(arr[i], i))
    }

    return temp;
};

const myArr = [1, 5, 2, 4, 3]
const conv = (x, y) => {
    return x + y;
}

console.log(map(myArr, conv));